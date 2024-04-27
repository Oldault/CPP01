#include "Zombie.hpp"
#include "Colors.h"

Zombie* zombieHorde( int N, std::string name );
unsigned int stringToUnsignedInt(const std::string& str);

int main(int ac, char **av)
{
  if (ac != 3) {
    std::cerr << FMAG("First parameter:\tNumber of zombies.\nSecond parameter:\tZombies names.\n") << FCYN("Example: `./zombieHorde 3 chump`, `./zombieHorde 5 john` etc..\n");
    return 1;  
  }
  int N = stringToUnsignedInt(av[1]);
  std::string name = av[2];
  Zombie* z = zombieHorde(N, name);

  for (int i = 0; i < N; i++)
  {
    z[i].announce();
  }

  if (z != NULL) {
    delete[] z;
  }

  return 0;
}
