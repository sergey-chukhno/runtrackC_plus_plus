#include <iostream>

int main() {
    double num1, num2;
    char operateur;

    std::cout << "=== Calculatrice simple ===" << std::endl;
    std::cout << "Entrez l'opération (ex: 4.5 * 2): ";
    std::cin >> num1 >> operateur >> num2;

    double result;

    switch (operateur) {
        case '+':
            result = num1 + num2;
            std::cout << "Résultat: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Résultat: " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Résultat: " << result << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Résultat: " << result << std::endl;
            } else {
                std::cout << "Erreur: division par zéro!" << std::endl;
            }
            break;
        default:
            std::cout << "Erreur: opérateur invalide!" << std::endl;
    }

    return 0;
}
