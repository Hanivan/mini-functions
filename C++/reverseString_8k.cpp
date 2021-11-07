#include <algorithm>
#include <iostream>
#include <string>

std::string reverseString(std::string str) {
  std::reverse(str.begin(), str.end());
  return str;
}

int main() {
  std::string str = "hello";
  std::cout << reverseString(str);
}
