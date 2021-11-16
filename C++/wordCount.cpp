#include <iostream>
#include <string>

int main() {
  std::string word;
  int jumlahKata = 0;
  int posisiKata = 0;

  std::cout << "Masukkan kalimat:\n";
  std::getline(std::cin, word);

  while (true) {
    posisiKata = word.find(" ", posisiKata + 1);
    jumlahKata++;
    if (posisiKata < 0) {
      break;
    }
  }

  std::cout << "Kalimat yang anda masukkan terdapat " << jumlahKata << " kata"
            << std::endl;

  return 0;
}
