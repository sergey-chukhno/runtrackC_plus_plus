#include <iostream> 

class Operator {
  private:
    double value;
  
  public: 
    // Constructor
    Operator(double value): value(value) {}

    // Overload the + operator
    Operator operator+(const Operator& other) {
      return Operator(this->value + other.value);
    }
    // Overload the - operator
    Operator operator-(const Operator& other) {
      return Operator(this->value - other.value);
    }
    // Overload the * operator
    Operator operator*(const Operator& other) {
      return Operator(this->value * other.value);
    }
    // Overload the / operator
    Operator operator/(const Operator& other) {
      if (other.value == 0) {
        std::cerr << "Error: Division by zero" << std::endl;
        return Operator(0);
      }
      return Operator(this->value / other.value);
    }

    // Getter for value
    double getValue() const {
      return value;
    }
};

int main() {
  Operator op1(2); 
  Operator op2(3);

  Operator sum = op1 + op2;
  Operator diff = op1 - op2;
  Operator multipl = op1 * op2;
  Operator div = op1 / op2;

  std::cout << "Sum: " << sum.getValue() << std::endl;
  std::cout << "Difference: " << diff.getValue() << std::endl;
  std::cout << "Multiplication: " << multipl.getValue() << std::endl;
  std::cout << "Division: " << div.getValue() << std::endl;

  return 0;
}