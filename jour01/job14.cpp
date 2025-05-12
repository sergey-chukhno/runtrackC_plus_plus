#include <iostream>

int main() {
    int nombre, inverse = 0;

    std::cout << "Entrez un nombre entier : ";
    std::cin >> nombre;

    int original = nombre; 

    while (nombre != 0) {
        int chiffre = nombre % 10;           // Dernier chiffre
        inverse = inverse * 10 + chiffre;    // On construit le nombre inversé
        nombre /= 10;                        // On enlève le dernier chiffre
    }

    std::cout << "Le nombre inverse de " << original << " est : " << inverse << std::endl;

    return 0;
}
