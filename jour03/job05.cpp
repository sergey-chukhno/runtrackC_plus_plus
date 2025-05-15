#include <iostream>

bool estChiffre(char c) {
    return c >= '0' && c <= '9';
}

int toInt(char dizaine, char unite) {
    return (dizaine - '0') * 10 + (unite - '0');
}

bool estHeureValide(const char* heure) {
    // Vérifie longueur : doit être exactement 5 caractères + '\0'
    if (heure[0] == '\0' || heure[1] == '\0' || heure[2] == '\0' ||
        heure[3] == '\0' || heure[4] == '\0' || heure[5] != '\0') {
        return false;
    }

    // Vérifie le format XXhXX
    if (!estChiffre(heure[0]) || !estChiffre(heure[1])) return false;
    if (heure[2] != 'h') return false;
    if (!estChiffre(heure[3]) || !estChiffre(heure[4])) return false;

    // Vérifie les plages de valeurs
    int heures = toInt(heure[0], heure[1]);
    int minutes = toInt(heure[3], heure[4]);

    return heures >= 0 && heures < 24 && minutes >= 0 && minutes < 60;
}

int main() {
    char entree[6];
    std::cout << "Entrez une heure au format XXhXX : ";
    std::cin >> entree;

    if (estHeureValide(entree)) {
        std::cout << "Format valide !" << std::endl;
    } else {
        std::cout << "Format invalide !" << std::endl;
    }

    return 0;
}
