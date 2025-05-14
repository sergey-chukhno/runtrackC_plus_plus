#include <iostream>

unsigned long long factorielle(int n) {
    unsigned long long resultat = 1;

    for (int i = 2; i <= n; ++i) {
        resultat *= i;
    }

    return resultat;
}

int main() {
    int n;

    do {
        std::cout << "Entrez un entier entre 0 et 20 : ";
        std::cin >> n;

        if (n < 0 || n > 20) {
            std::cout << "Erreur : entrez un entier entre 0 et 20 !" << std::endl;
        }

    } while (n < 0 || n > 20);

    unsigned long long resultat = factorielle(n);
    std::cout << n << "! = " << resultat << std::endl;

    return 0;
}

