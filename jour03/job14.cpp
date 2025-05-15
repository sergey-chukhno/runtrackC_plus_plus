#include <iostream>
#include <string>

// Fonction pour vérifier si un mot est un palindrome
bool estPalindrome(const std::string& mot) {
    int debut = 0;
    int fin = mot.length() - 1;
    
    while (debut < fin) {
        if (mot[debut] != mot[fin]) {
            return false;
        }
        debut++;
        fin--;
    }
    return true;
}

int main() {
    std::string tab[] = {"radar", "hello", "lvel", "stats", "world"};
    int taille = sizeof(tab) / sizeof(tab[0]);

    std::cout << "Palindromes trouvés dans le tableau :\n";
    for (int i = 0; i < taille; i++) {
        if (estPalindrome(tab[i])) {
            std::cout << tab[i] << std::endl;
        }
    }

    return 0;
}
