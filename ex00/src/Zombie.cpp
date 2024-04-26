#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
  _name = name;
  std::cout << KMAG << "Zombie " << "\x1B[1m" << _name << RST << KMAG << " was born.\n" << RST;
}
Zombie::~Zombie() {
  std::cout << KRED << "\x1B[1m" << _name << RST << KRED <<" Just Died 🪦🪓\n" << RST;
}

void  Zombie::announce( void ) {
  std::cout << "\x1B[1m" << KGRN << _name << " {¬ºཀ°}¬: " << RST << ITAL("BraiiiiiiinnnzzzZ...\n");
}
