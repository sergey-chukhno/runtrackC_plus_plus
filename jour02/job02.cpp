#include <iostream>
#include <string>

class Aquatique {
protected:
    double vitesseNage; // en m/s
public:
    Aquatique(double vitesse) : vitesseNage(vitesse) {}

    virtual void nage() {
        std::cout << "Je nage à " << vitesseNage << " m/s." << std::endl;
    }

    void setVitesseNage(double vitesse) {
        vitesseNage = vitesse;
    }

    double getVitesseNage() const {
        return vitesseNage;
    }
};

class Terrestre {
protected:
    double vitesseMarche; // en m/s
public:
    Terrestre(double vitesse) : vitesseMarche(vitesse) {}

    virtual void marche() {
        std::cout << "Je marche à " << vitesseMarche << " m/s." << std::endl;
    }

    void setVitesseMarche(double vitesse) {
        vitesseMarche = vitesse;
    }

    double getVitesseMarche() const {
        return vitesseMarche;
    }
};

class Pingouin : public Aquatique, public Terrestre {
private:
    double vitesseGlisse; // en m/s
    std::string nom;

public:
    Pingouin(std::string n, double vNage, double vMarche, double vGlisse)
        : Aquatique(vNage), Terrestre(vMarche), vitesseGlisse(vGlisse), nom(n) {}

    // Constructeur de copie
    Pingouin(const Pingouin &other)
        : Aquatique(other.vitesseNage), Terrestre(other.vitesseMarche), 
          vitesseGlisse(other.vitesseGlisse), nom(other.nom) {}

    void sePresenter() const {
        std::cout << "Je suis un pingouin, mon nom est " << nom << "." << std::endl;
    }

    void nage() override {
        std::cout << "Je nage à " << vitesseNage << " m/s." << std::endl;
    }

    void marche() override {
        std::cout << "Je marche à " << vitesseMarche << " m/s." << std::endl;
    }

    void glisse() const {
        std::cout << "Je glisse à " << vitesseGlisse << " m/s." << std::endl;
    }

    void setVitesseGlisse(double vitesse) {
        vitesseGlisse = vitesse;
    }

    double getVitesseGlisse() const {
        return vitesseGlisse;
    }

    void setNom(const std::string& newNom) {
        nom = newNom;
    }

    std::string getNom() const {
        return nom;
    }
};

int main() {
    // Création d'un Pingouin
    Pingouin p1("Pengy", 2.5, 1.2, 3.0);

    p1.sePresenter();
    p1.nage();
    p1.marche();
    p1.glisse();

    // Modification des vitesses
    p1.setVitesseNage(3.0);
    p1.setVitesseMarche(1.5);
    p1.setVitesseGlisse(4.0);

    std::cout << "Après modification des vitesses : " << std::endl;
    p1.nage();
    p1.marche();
    p1.glisse();

    // Création d'un Pingouin par constructeur de copie
    Pingouin p2 = p1;

    std::cout << "Le pingouin copié : " << std::endl;
    p2.sePresenter();
    p2.nage();
    p2.marche();
    p2.glisse();

    return 0;
}

