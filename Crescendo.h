#ifndef Crescendo_H
#define Crescendo_H
#include <string>
#include "Player.h"

class Crescendo : public Player {
   public:
       Crescendo();
      
       std::string get_Move();
       void setCounter(int);
      
   private:
       int counter;
       std::string choice;
};

#endif
