#include <iostream>

int rekursif(int a, int b) {
  if (b <= 1) {
    return a;
  } else {
    return a * rekursif(a, (b - 1));
  }
}

int main() {

  int a, b;

  std::cout << "Masukkan angka: ";
  std::cin >> a;

  std::cout << "Masukkan pangkat: ";
  std::cin >> b;

  std::cout << "Hasil Rekursif: " << rekursif(a, b) << std::endl;

  return 0;
}
