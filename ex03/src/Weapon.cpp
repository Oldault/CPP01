#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _type(weapon) {
  std::cout << KGRN << "Weapon " << UNDL_A << _type << RST << KGRN << " Created.\n" << RST;
}

Weapon::Weapon() : _type("(null)") {
  std::cout << FGRN("Weapon without type Created.\n");
}

Weapon::~Weapon() {
  std::cout << KRED << "Weapon " << UNDL_A << _type << RST << KRED << " Destroyed.\n" << RST;
}

std::string const & Weapon::getType( void ) const {
  return _type;
}

void  Weapon::setType (std::string type) {
  _type = type;
  std::cout << KGRN << "Weapon type set to: " << UNDL_A << _type << ".\n" << RST;
}
