#include "Colors.h"
#include <iostream>
#include <string>
#include <fstream>

int main (int ac, char **av)
{
  if (ac != 4) {
    std::cerr << FRED("\n\tIncorrect input. Try: ") << KRED << UNDL_A << "./replace filename s1 s2\n\n" << RST;
    return 1;
  }

  std::string inFileName = av[1];
  std::string outFileName = inFileName + ".replace";
  std::string replaceThis = av[2];
  std::string replaceWith = av[3];

  std::fstream inFile;
  inFile.open(inFileName.c_str() , std::fstream::in);
  if (!inFile.is_open()) {
    std::cerr << FRED("\n\tCould not open: ") << KRED << UNDL_A << inFileName << "\n\n" << RST;
    return 2;
  }

  std::fstream outFile;
  outFile.open(outFileName.c_str() , std::fstream::out);

  std::string line;
  while (getline(inFile, line))
  {
    std::string newLine;
    std::size_t startPos = 0;
    std::size_t pos;

    while ((pos = line.find(replaceThis, startPos)) != std::string::npos)
    {
      newLine += line.substr(startPos, pos - startPos);
      newLine += replaceWith;
      startPos = pos + replaceThis.length();
    }
    newLine += line.substr(startPos);
    outFile << newLine << std::endl;
  }

  inFile.close();
  outFile.close();

  std::cout << KGRN << "\n\tProgram was executed with Success\n\tPlease find the result inside: " << UNDL_A << outFileName << RST << "\n\n";

  return 0;
}
