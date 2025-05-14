#include <iostream>

int main() {
    double note;

    std::cout << "Entrez une note (entre 0 et 20) : ";
    std::cin >> note;

    if (note >= 0 && note <= 20) {
        if (note > 10) {
            std::cout << "validé" << std::endl;
        } else {
            std::cout << "non validé" << std::endl;
        }
    } else {
        std::cout << "Erreur : la note doit être comprise entre 0 et 20." << std::endl;
    }

    return 0;
}
