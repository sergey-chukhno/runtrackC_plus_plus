#include <iostream>

int main() {
    int n, m, temp;

    // Saisie des entiers
    std::cout << "Entrez la valeur de n : ";
    std::cin >> n;

    std::cout << "Entrez la valeur de m : ";
    std::cin >> m;

    // Affichage avant échange
    std::cout << "\nAvant l'échange : n = " << n << ", m = " << m << std::endl;

    // Échange des valeurs
    temp = n;
    n = m;
    m = temp;

    // Affichage après échange
    std::cout << "Après l'échange : n = " << n << ", m = " << m << std::endl;

    return 0;
}
