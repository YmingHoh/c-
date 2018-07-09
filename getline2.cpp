// istream::getline example
#include <iostream>     // std::cin, std::cout

int main () {
  char name[256], title[256];

  std::cout << "Please, ener your name: ";
  std::cin.getline (name,100);

  std::cout << "Please, enter your favourite movie: ";
  std::cin.getline (title,100);

  std::cout << name << "'s favourite movie is " << title;

  return 0;
}
