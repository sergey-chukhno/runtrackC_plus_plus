#include <iostream>

int main() {
   
    int tab[5] = {10, 20, 30, 40, 50};

  
    for (int i = 0; i < 5; ++i) {
        std::cout << "Adresse de tab[" << i << "] : " << &tab[i]
                  << " | Valeur : " << tab[i] << std::endl;
    }

    return 0;
}
