#include <iostream>
#include <cmath> // pour std::sqrt

int main() {
    double nombre;

    while (true) {
        std::cout << "Entrez un nombre réel (0 pour quitter) : ";
        std::cin >> nombre;

        if (nombre == 0.0) {
            std::cout << "Programme terminé." << std::endl;
            break;
        }

        if (nombre < 0.0) {
            std::cout << "Erreur : la racine carrée d’un nombre négatif est interdite (en dehors des complexes)." << std::endl;
        } else {
            double racine = std::sqrt(nombre);
            std::cout << "La racine carrée de " << nombre << " est : " << racine << std::endl;
        }
    }

    return 0;
}
