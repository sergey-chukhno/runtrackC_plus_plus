#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Entrez le premier entier : ";
    std::cin >> a;

    std::cout << "Entrez le deuxième entier : ";
    std::cin >> b;

    std::cout << "Entrez le troisième entier : ";
    std::cin >> c;


    int plusGrand = a;

    if (b > plusGrand) {
        plusGrand = b;
    }
    if (c > plusGrand) {
        plusGrand = c;
    }

    std::cout << "Le plus grand des trois entiers est : " << plusGrand << std::endl;

    return 0;
}
