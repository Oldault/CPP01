#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "Colors.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

class Zombie
{
  private:
    std::string _name;
  public:
    Zombie(std::string name);
    Zombie(void);
    ~Zombie(void);

    void  announce(void);
    void  setName(std::string name);
};

#endif