#include <iostream>

int main() {
    int a, b;

    std::cout << "Entrez la valeur de a : ";
    std::cin >> a;

    std::cout << "Entrez la valeur de b : ";
    std::cin >> b;

    if (a <= b) {
        for (int i = a; i <= b; ++i) {
            std::cout << i << " ";
        }
    } else {
        for (int i = a; i >= b; --i) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}
