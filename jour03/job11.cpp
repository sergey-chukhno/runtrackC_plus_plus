#include <iostream> 

int main() {
  int T[10];
  int sommePairs = 0; 

  std::cout << "Entrez 10 entiers : " << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << "Entier" << i + 1 << " : ";
    std::cin >> T[i]; 

    if (T[i]%2 == 0)
      sommePairs += T[i]; 
  }
  std::cout << "La somme des entiers pairs est : " << sommePairs << std::endl;

  return 0; 
}