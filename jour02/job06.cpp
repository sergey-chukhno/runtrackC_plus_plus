#include <iostream>

int main() {
    int n;

    std::cout << "Entrez un entier positif : ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "Erreur : veuillez entrer un entier positif supérieur à 0." << std::endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        std::cout << i;

        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << " -> multiple de 3 et 5";
        } else if (i % 3 == 0) {
            std::cout << " -> multiple de 3";
        } else if (i % 5 == 0) {
            std::cout << " -> multiple de 5";
        }

        std::cout << std::endl;
    }

    return 0;
}
