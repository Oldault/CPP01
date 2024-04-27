#include "Harl.hpp"

int main()
{
  Harl harl;

  std::cout << std::endl;
  harl.complain("DEBUG");
  harl.complain("INFO");
  harl.complain("WARNING");
  harl.complain("CRITICAL");
  harl.complain("ERROR");

  return 0;
}
