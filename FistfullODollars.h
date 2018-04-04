#ifndef FistfullODollars_H
#define FistfullODollars_H
#include <string>
#include "Player.h"

class FistfullODollars : public Player {
   public:
       FistfullODollars();
       std::string get_Move();
       void setCounter(int);
    
   private:
       int counter;
       std::string choice;
};

#endif
