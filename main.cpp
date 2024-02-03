#include <iostream>

int main() {

  int favoriteNumber;

  std::cout << "Enter your favorite Number between 1 and 100:";

  std::cin >> favoriteNumber;

  if (favoriteNumber > 100) {
    std::cout << "That number is too high!" << std::endl;
  } else if (favoriteNumber % 2) {
    std::cout << "That number Isn't my favorite" << std::endl;
  } else {
    std::cout << "That's my favorite number too!" << std::endl;
  }
  return 0;
}
