#include "Harl.hpp"

int main(int ac, char **av)
{
  if (ac != 2) {
    std::cerr << BOLD_A << "\n\t🚨 Invalid amount of parameters (expected 2) 🚨" << RST << "\n";
    std::cerr << ITAL_A << "\tTry `./harlFilter \"WARNING\"`" << RST << "\n\n";
    return 1;
  }

  Harl harl;

  std::cout << std::endl;
  harl.complain(av[1]);

  return 0;
}
