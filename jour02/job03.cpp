#include <iostream>
#include <string>
#include <vector>
#include <memory> // pour shared_ptr et weak_ptr
#include <algorithm>

class Aquatique {
protected:
    double vitesseNage;
public:
    Aquatique(double vNage) : vitesseNage(vNage) {}
    virtual void nage() {
        std::cout << "Je nage à " << vitesseNage << " m/s." << std::endl;
    }
    void setVitesseNage(double v) { vitesseNage = v; }
    double getVitesseNage() const { return vitesseNage; }
};

class Terrestre {
protected:
    double vitesseMarche;
public:
    Terrestre(double vMarche) : vitesseMarche(vMarche) {}
    virtual void marche() {
        std::cout << "Je marche à " << vitesseMarche << " m/s." << std::endl;
    }
    void setVitesseMarche(double v) { vitesseMarche = v; }
    double getVitesseMarche() const { return vitesseMarche; }
};

class Pingouin : public Aquatique, public Terrestre {
private:
    std::string nom;
    double vitesseGlisse;

public:
    static std::vector<std::weak_ptr<Pingouin>> listePingouins;

    Pingouin(std::string n, double vNage, double vMarche, double vGlisse)
        : Aquatique(vNage), Terrestre(vMarche), nom(n), vitesseGlisse(vGlisse) {
        std::cout << "Création de " << nom << std::endl;
    }

    ~Pingouin() {
        std::cout << "Destruction de " << nom << std::endl;
        nettoyerListe();
    }

    // Méthode pour s'ajouter à la liste des pingouins
    static void enregistrer(std::shared_ptr<Pingouin> p) {
        listePingouins.push_back(p);
        nettoyerListe();
    }

    static void nettoyerListe() {
        // Supprimer les éléments expirés (destructeurs appelés)
        listePingouins.erase(
            std::remove_if(
                listePingouins.begin(),
                listePingouins.end(),
                [](const std::weak_ptr<Pingouin>& wp) { return wp.expired(); }
            ),
            listePingouins.end()
        );
    }

    void sePresenter() const {
        std::cout << "Je suis un pingouin, je m'appelle " << nom << "." << std::endl;
    }

    void nage() override {
        std::cout << nom << " nage à " << vitesseNage << " m/s." << std::endl;
    }

    void marche() override {
        std::cout << nom << " marche à " << vitesseMarche << " m/s." << std::endl;
    }

    void glisse() const {
        std::cout << nom << " glisse à " << vitesseGlisse << " m/s." << std::endl;
    }

    void setVitesseGlisse(double v) { vitesseGlisse = v; }
    double getVitesseGlisse() const { return vitesseGlisse; }
    std::string getNom() const { return nom; }
};

// Initialisation du vecteur statique
std::vector<std::weak_ptr<Pingouin>> Pingouin::listePingouins;

int main() {
    {
        auto p1 = std::make_shared<Pingouin>("Pengy", 2.5, 1.2, 3.0);
        auto p2 = std::make_shared<Pingouin>("Flappy", 2.2, 1.0, 2.8);

        Pingouin::enregistrer(p1);
        Pingouin::enregistrer(p2);

        std::cout << "\nListe des pingouins vivants :\n";
        for (const auto& wp : Pingouin::listePingouins) {
            if (auto sp = wp.lock()) {
                sp->sePresenter();
            }
        }
    } // p1 et p2 sont détruits ici

    std::cout << "\nAprès destruction automatique :\n";
    Pingouin::nettoyerListe(); // nettoyage manuel (optionnel ici)
    std::cout << "Nombre restant de pingouins : " << Pingouin::listePingouins.size() << std::endl;

    return 0;
}
