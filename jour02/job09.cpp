#include <iostream>

int main() {
    int a, b, x;

    std::cout << "Entrez la borne inférieure (a) : ";
    std::cin >> a;

    std::cout << "Entrez la borne supérieure (b) : ";
    std::cin >> b;

    if (a >= b) {
        std::cout << "Erreur : a doit être strictement inférieur à b." << std::endl;
        return 1;
    }

    std::cout << "Entrez un entier à tester : ";
    std::cin >> x;

    if (x >= a && x <= b) {
        std::cout << "GAGNE" << std::endl;
    } else {
        std::cout << "PERDU" << std::endl;
    }

    return 0;
}
