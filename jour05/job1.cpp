#include <iostream>
#include "joueur.hpp"

int main() {
  Joueur joueur(0, 0); 
  joueur.getPosition(); 
  joueur.setPosition(5, 10);
  joueur.getPosition();
  joueur.move(3, -2);
  joueur.getPosition();
  return 0;
}