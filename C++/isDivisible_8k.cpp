#include <iostream>

bool isDivisible(int n, int x, int y) { return n % x == 0 && n % y == 0; }

int main() {

  int n = 3, x = 3, y = 4;

  std::cout << isDivisible(n, x, y);

  return 0;
}
