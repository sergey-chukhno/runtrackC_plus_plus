#include <iostream>
#include <vector>

int main() {
  int n;
  std::cout << "Enter the number of elements in the array: ";
  std::cin >> n;
  if (n <= 0) {
    std::cout << "Invalid number of elements. The number should be positive and greater than 0" << std::endl;
    return 1;
  }
  std::cout << "Enter the elements of the array\n ";


  std::vector<int> array(n);

  int max;
  
  for (int i = 0; i < n; i++) {
    int current;
    std::cout << "Enter integer " << i + 1 << ": ";
    std::cin >> current;

    if (i == 0) {
      max = current;
    } else if (current > max)
    {
      max = current;
    } 
  }
  std::cout << "The maximum value is: " << max << std::endl;
  return 0;
  }
