#ifndef Avalanche_H
#define Avalanche_H
#include "Player.h"
#include <string>

class Avalanche : public Player {
   public:
       Avalanche();
       std::string get_Move();
      
   private:
       std::string choice;
};

#endif
