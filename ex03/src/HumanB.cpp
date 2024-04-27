#include "HumanB.hpp"

HumanB::HumanB (std::string name) : _name(name), _weapon(NULL) {
  std::cout << KCYN << "HumanB called " << BOLD_A << _name << RST << KCYN << " was Born.\n" << RST;
}

HumanB::~HumanB () {
  std::cout << FRED("HumanB Was destroyed.\n");
}

void  HumanB::attack () {
  if (_weapon != NULL) {
    std::cout << BOLD_A << KCYN << _name << RST << KCYN << " attacks with his " << UNDL_A << _weapon->getType() << ".\n" << RST;
  }
  else {
    std::cout << BOLD_A << KCYN << _name << RST << KCYN << " has no weapon to attck with.\n" << RST;
  }
}

void  HumanB::setWeapon(Weapon& weapon) {
  _weapon = &weapon;
  std::cout << BOLD_A << KCYN << _name << RST << KCYN << "'s Weapon was set to: " << UNDL_A << _weapon->getType() << ".\n" << RST;
}
