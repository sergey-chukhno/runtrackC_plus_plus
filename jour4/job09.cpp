#include <iostream>
#include <vector>

int main() {
  int size;
  std::cout << "Entrez le nombre d'entiers à saisr : ";
  std::cin >> size;

  std::vector<int> entiers(size);
  std::cout << " Entrez " << size << " entiers : ";
  for (int i = 0; i < size; i++) {
    std::cin >> entiers[i];
  }

  std::cout << "Les entiers saisis sont : ";
  for (int i = 0; i < size; i++) {
    std::cout << entiers[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}