#include <iostream>
#include "joueur.hpp"

int main() {
  Joueur player1;
  player1.getName();
  player1.getPosition();

  Joueur player2(5, 10);
  player2.getName();
  player2.getPosition();
  player2.setName("Player2");
  player2.setPosition(15, 20);
  player2.getName();
  player2.getPosition();
  player2.move(5, -5);
  player2.getPosition();

  Joueur player3(0, 0, "Player3");
  player3.getName();
  player3.getPosition();

  return 0; 
}