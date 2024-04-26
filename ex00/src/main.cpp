#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
  Zombie* z = newZombie("Bob");
  z->announce();
  randomChump("John");
  delete z;
  
  return 0;
}
