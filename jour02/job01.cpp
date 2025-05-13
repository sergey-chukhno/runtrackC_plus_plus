#include <iostream>
#include <string>

class Aquatique {
protected:
    double vitesseNage; // en m/s

public:
    Aquatique(double vitesse) : vitesseNage(vitesse) {}

    virtual void nage() const {
        std::cout << "Je nage à " << vitesseNage << " m/s." << std::endl;
    }

    virtual ~Aquatique() noexcept = default;
};

class Terrestre {
protected:
    double vitesseMarche; // en m/s

public:
    Terrestre(double vitesse) : vitesseMarche(vitesse) {}

    virtual void marche() const {
        std::cout << "Je marche à " << vitesseMarche << " m/s." << std::endl;
    }

    virtual ~Terrestre() noexcept = default;
};

class Pingouin : public Aquatique, public Terrestre {
private:
    std::string nom;

public:
    Pingouin(const std::string& nomPingouin, double vitesseNage, double vitesseMarche)
        : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom(nomPingouin) {}

    void sePresenter() const {
        std::cout << "Bonjour, je suis un pingouin. Je m'appelle " << nom << "." << std::endl;
    }

    // Redéfinition optionnelle
    void nage() const override {
        std::cout << nom << " nage à " << vitesseNage << " m/s." << std::endl;
    }

    void marche() const override {
        std::cout << nom << " marche à " << vitesseMarche << " m/s." << std::endl;
    }
};

int main() {
    Pingouin p("Pingu", 2.0, 1.0);
    p.sePresenter();
    p.nage();
    p.marche();

    return 0;
}