#include <iostream>

int main() {
    int limite;

    std::cout << "Entrez la limite supérieure pour la suite de Fibonacci : ";
    std::cin >> limite;

    int a = 0;
    int b = 1;

    std::cout << "Suite de Fibonacci jusqu'à " << limite << " : ";

    if (limite >= 0) std::cout << a << " ";
    if (limite >= 1) std::cout << b << " ";

    int suivant = a + b;

    while (suivant <= limite) {
        std::cout << suivant << " ";
        a = b;
        b = suivant;
        suivant = a + b;
    }

    std::cout << std::endl;
    return 0;
}
