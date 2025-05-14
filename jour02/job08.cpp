#include <iostream>

int main() {
    int a, b;

    std::cout << "Entrez la valeur de a : ";
    std::cin >> a;

    std::cout << "Entrez la valeur de b : ";
    std::cin >> b;

    if (a <= b) {
        int i = a;
        while (i <= b) {
            std::cout << i << " ";
            ++i;
        }
    } else {
        int i = a;
        while (i >= b) {
            std::cout << i << " ";
            --i;
        }
    }

    std::cout << std::endl;
    return 0;
}
