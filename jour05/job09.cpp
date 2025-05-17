#include <iostream>
#include "job09.hpp"

int main() {
  // Create instances of Chien and Chat
  Chien chien1;
  Chien chien2;
  Chat chat1;
  Chat chat2;
  Chat chat3;

  // Call methods on the objects
  chien1.crier();
  chien1.manger();
  chat1.crier();
  chat1.manger();

  // Display the total number of animals created
  std::cout << "Total number of animals created: " << Animal::getTotalAnimaux() << std::endl;

  return 0;
}