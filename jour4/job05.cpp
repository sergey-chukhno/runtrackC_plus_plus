#include <iostream> 

struct Point {
  int x, y;
};

int main() {
  Point p;
  Point *ptr = &p;

  ptr->x = 5;
  ptr->y = 10; 

  std::cout << "Coordonnées du point p : (" << ptr->x << ", " << ptr->y << ")" << std::endl;

  return 0;
}
