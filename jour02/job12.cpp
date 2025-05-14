#include <iostream>

int main() {
    int n;
    double somme = 0.0;

    // Demande à l'utilisateur un entier n
    std::cout << "Entrez un entier positif n : ";
    std::cin >> n;

    // Vérification de la validité de l'entrée
    if (n <= 0) {
        std::cout << "Erreur : veuillez entrer un entier strictement positif." << std::endl;
        return 1;
    }

    // Calcul de la somme harmonique
    for (int i = 1; i <= n; ++i) {
        somme += 1.0 / i;
    }

    // Affichage du résultat
    std::cout << "La somme des " << n << " premiers termes de la série harmonique est : " << somme << std::endl;

    return 0;
}
