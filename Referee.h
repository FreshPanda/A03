#ifndef REFEREE_H
#define REFEREE_H
#include <string>
#include "Player.h"
#include "RandomComputer.h"

class Referee {
   public:
       std::string get_Move(std::string);
       std::string evaluate(Player *p1, Player *p2);
    
   private:
       std::string Results(std::string, std::string);
       bool checkValid(std::string);
      
};

#endif
