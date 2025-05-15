#include <iostream>
#include <string>

int main() {
    std::string str1, str2;

    std::cout << "Entrez la première chaîne : ";
    std::getline(std::cin, str1);

    std::cout << "Entrez la deuxième chaîne : ";
    std::getline(std::cin, str2);

    if (str1 == str2) {
        std::cout << "0" << std::endl; // Égales
    } else {
        std::cout << "1" << std::endl; // Différentes
    }

    return 0;
}
