#include <iostream> 
#include <vector>

int main() {
  std::vector<std::string>tab = {"2019", "La Plateforme", "3.14", "Etudiants"};

  for (int i = 0; i < 4; i++) {
    std::cout << " Element " << tab[i] << " Son addresse mémoire : " << &tab[i] << "" " Sa valeur est : " << tab[i] << std::endl;
  }
return 0;
}