#include <iostream>

int main() {
    int a = 1;
    int b = 2;

    std::cout << "Avant échange : a = " << a << ", b = " << b << std::endl;

    // Pointeurs vers a et b
    int* ptrA = &a;
    int* ptrB = &b;

    // Échange des valeurs via pointeurs
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    std::cout << "Après échange : a = " << a << ", b = " << b << std::endl;

    return 0;
}
