#include <iostream>
#include <iomanip> // pour std::setw

int main() {
    const int max = 10;

    // Affichage de l'en-tête (1 à 10)
    std::cout << "    ";
    for (int i = 1; i <= max; ++i) {
        std::cout << std::setw(4) << i;
    }
    std::cout << "\n";

    // Ligne de séparation
    std::cout << "    ";
    for (int i = 1; i <= max; ++i) {
        std::cout << "----";
    }
    std::cout << "\n";

    // Affichage des lignes de la table
    for (int i = 1; i <= max; ++i) {
        std::cout << std::setw(2) << i << " |"; // étiquette de ligne

        for (int j = 1; j <= max; ++j) {
            std::cout << std::setw(4) << i * j;
        }

        std::cout << "\n";
    }

    return 0;
}
