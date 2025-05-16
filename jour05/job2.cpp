#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
private:
  int x;
  int y;

public:
  Joueur(int initialX, int initialY) : x(initialX), y(initialY) {}

  void getPosition() const {
    std::cout << "Position: (" << x << ", " << y << ")" << std::endl;
  }

  void setPosition(int newX, int newY) {
    x = newX;
    y = newY;
  }

  void move(int offsetX, int offsetY) {
    x += offsetX;
    y += offsetY;
  }
};

#endif