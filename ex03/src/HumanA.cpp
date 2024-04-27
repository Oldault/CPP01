#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
  std::cout << KMAG << "HumanA called " << BOLD_A << _name << RST << KMAG << " holding a " << UNDL_A << _weapon.getType() << RST << KMAG << " was Born.\n" << RST;
}

HumanA::~HumanA () {
  std::cout << FRED("HumanA Was destroyed.\n");
}

void  HumanA::attack () {
  std::cout << BOLD_A << KMAG << _name << RST << KMAG << " attacks with his " << UNDL_A << _weapon.getType() << ".\n" << RST;
}