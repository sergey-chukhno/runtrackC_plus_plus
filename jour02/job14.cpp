#include <iostream>
#include <cmath>

int main() {
    int nombre, original, somme = 0, nbChiffres = 0;

    std::cout << "Entrez un nombre entier positif : ";
    std::cin >> nombre;

    original = nombre;

    // Calcul du nombre de chiffres
    int temp = nombre;
    while (temp > 0) {
        temp /= 10;
        nbChiffres++;
    }

    // Calcul de la somme des chiffres élevés à la puissance nbChiffres
    temp = nombre;
    while (temp > 0) {
        int chiffre = temp % 10;
        somme += std::pow(chiffre, nbChiffres);
        temp /= 10;
    }

    // Vérification
    if (somme == original) {
        std::cout << original << " est un nombre narcissique." << std::endl;
    } else {
        std::cout << original << " n'est pas un nombre narcissique." << std::endl;
    }

    return 0;
}
