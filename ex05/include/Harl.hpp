#ifndef _HARL_HPP_
# define _HARL_HPP_

#include <string>
#include <iostream>
#include <cstring>

class Harl
{
  private:

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

    typedef void (Harl::*complaintPtr)();
    struct complaintMap {
      std::string key;
      complaintPtr call;
    };

    complaintMap callMap[4];

  public:

    Harl();
    ~Harl();

    void complain( std::string level );
};

#endif