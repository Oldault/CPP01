#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
  std::cout << std::endl;

  /* HumanA */
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  std::cout << std::endl;

  /* HumanB */
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
  std::cout << std::endl;

  return 0;
}
