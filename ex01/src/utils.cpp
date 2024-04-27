#include "Zombie.hpp"

unsigned int stringToUnsignedInt(const std::string& str)
{
  std::istringstream iss(str);
  unsigned int number;
  if (!(iss >> number)) {
      return -1;
  }
  return number;
}
