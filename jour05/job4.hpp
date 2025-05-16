#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>
#include <string> 

class Joueur {
  private:
    int x;
    int y;
    std::string name;
  public: 
    Joueur(): x(0), y(0), name("Unknown") {}
    Joueur(int initialX, int initialY): x(initialX), y(initialY), name("Unknown") {}
    Joueur(int initialX, int initialY, std::string playerName) : x(initialX), y(initialY), name(playerName) {};
    
    void getPosition() const {
        std::cout << "Position: (" << this->x << ", " << this->y << ")" << std::endl;
    }
    
    void setPosition(int newX, int newY) {
        this->x = newX;
        this->y = newY;
    }
    
    void getName() const {
        std::cout << "Name: " << this->name << std::endl;
    }
    
    void setName(std::string newName) {
        this->name = newName;
    }
    
    void move(int offsetX, int offsetY) {
        this->x += offsetX;
        this->y += offsetY;
    }
};
#endif
