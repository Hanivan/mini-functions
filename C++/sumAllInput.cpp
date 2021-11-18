#include <iostream>

int main() {
  int res = 0, a;

  std::cout << "Enter a numbers: ";
  while (std::cin >> a) {
    res += a;
    if (std::cin.get() == '\n') {
      break;
    }
  }

  std::cout << "Result: " << res << std::endl;
}
