#ifndef _WEAPON_HPP
#	define _WEAPON_HPP

#include "Colors.h"
#include <string>
#include <iostream>

class Weapon
{
  private:
    std::string _type;
  public:
    Weapon(std::string weapon);
    Weapon();
    ~Weapon();

    std::string const & getType( void ) const;
    void  setType(std::string type);
};

#endif