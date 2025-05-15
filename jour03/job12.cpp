#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialisation du générateur de nombres aléatoires
    std::srand(static_cast<unsigned int>(std::time(0)));

    int nombreMystere = std::rand() % 101; // nombre entre 0 et 100
    int tentative;
    int maxChances = 4; // nombre maximum de tentatives
    int chancesRestantes = maxChances;

    std::cout << "Devinez le nombre entre 0 et 100 !" << std::endl;

    while (chancesRestantes > 0) {
        std::cout << "Il vous reste " << chancesRestantes << " tentative(s)." << std::endl;
        std::cout << "Entrez un nombre : ";
        std::cin >> tentative;

        if (tentative < 0 || tentative > 100) {
            std::cout << "Veuillez entrer un nombre entre 0 et 100 !" << std::endl;
            continue;
        }

        if (tentative == nombreMystere) {
            std::cout << "Bravo ! Vous avez trouve le nombre mystere !" << std::endl;
            return 0;
        } else if (tentative < nombreMystere) {
            std::cout << "Trop petit !" << std::endl;
        } else {
            std::cout << "Trop grand !" << std::endl;
        }

        chancesRestantes--;
    }

    std::cout << "Dommage ! Vous avez perdu. Le nombre etait : " << nombreMystere << std::endl;

    return 0;
}
