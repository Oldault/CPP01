#include <iostream>
#include "Colors.h"

int main()
{
  std::string brain = "HI THIS IS BRAIN";
  std::string*  stringPTR = &brain;
  std::string&  stringREF = brain;

  //The memory addresses :
  std::cout << "Address of brain:\t" << KGRN << &brain << RST << std::endl;
  std::cout << "Address of stringPTR:\t" << KBLU << stringPTR << RST << std::endl;
  std::cout << "Address of stringREF:\t" << KYEL << &stringREF << RST << "\n\n";
  //The values :
  std::cout << "Value of brain:\t\t" << KGRN << brain << RST << std::endl;
  std::cout << "Value of stringPTR:\t" << KBLU << *stringPTR << RST << std::endl;
  std::cout << "Value of stringREF:\t" << KYEL << stringREF << RST << "\n";
  return 0;
}