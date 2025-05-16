#include <iostream> 

class Joueur {
  private:
    int x, y;
    
  public:
    void getPosition() {
      std::cout << "Position: (" << x << ", " << y << ")" << std::endl;
    };

    void setPosition(int newX, int newY) {
      x = newX;
      y = newY;
    };

    void move(int dx, int dy) {
      x += dx;
      y += dy;
    };

    Joueur(int startX, int startY) : x(startX), y(startY) {}; 
};