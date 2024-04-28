#include "Harl.hpp"

Harl::Harl()
{
  callMap[0].key = "DEBUG";
  callMap[0].call = &Harl::debug;
  callMap[1].key = "INFO";
  callMap[1].call = &Harl::info;
  callMap[2].key = "WARNING";
  callMap[2].call = &Harl::warning;
  callMap[3].key = "ERROR";
  callMap[3].call = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
  std::cout << BGRN("\t[ DEBUG ]") << "\n";
  std::cout << FGRN("I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!") << "\n\n";
}
void Harl::info( void )
{
  std::cout << BYEL("\t[ INFO ]") << "\n";
  std::cout << FYEL("I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!") << "\n\n";
}
void Harl::warning( void )
{
  std::cout << BMAG("\t[ WARNING ]") << "\n";
  std::cout << FMAG("I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.") << "\n\n";
}
void Harl::error( void )
{
  std::cout << BRED("\t[ ERROR ]") << "\n";
  std::cout << FRED("This is unacceptable! I want to speak to the manager now.") << "\n\n";
}

// void Harl::complain( std::string level ) {
//   for (int i = 0; i < 4; i++) {
//     if (callMap[i].key == level) {
//       while (i != 4)
//         (this->*callMap[i++].call)();
//       return ;
//     }
//   }
//   std::cout << ITAL_A << "[ Probably complaining about insignificant problems ]" << RST << "\n\n";
// }

enum string_code {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    unknown
};

string_code hashit (std::string const& inString)
{
    if (inString == "DEBUG") return DEBUG;
    if (inString == "INFO") return INFO;
    if (inString == "WARNING") return WARNING;
    if (inString == "ERROR") return ERROR;
    else return unknown;
}

void Harl::complain( std::string level )
{
  unsigned int i = 0;
  switch (hashit(level))
  {
    case DEBUG:
      (this->*callMap[i].call)();
      break;
    case INFO:
      (this->*callMap[i = 1].call)();
      break;
    case WARNING:
      (this->*callMap[i = 2].call)();
      break;
    case ERROR:
      (this->*callMap[i = 3].call)();
      break;
    case unknown: std::cout << ITAL_A << "[ Probably complaining about insignificant problems ]" << RST << "\n\n"; break;
  }
  if (hashit(level) != unknown) {
    while (++i != 4)
      (this->*callMap[i].call)();
  }
}
