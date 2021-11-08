#include <iostream>

int liters(double time) { return time * 0.5; }

int main() {

  double hours = 3;

  std::cout << liters(hours) << std::endl;

  return 0;
}
