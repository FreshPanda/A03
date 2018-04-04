#ifndef PaperDoll_H
#define PaperDoll_H
#include <string>
#include "Player.h"

class PaperDoll : public Player {
   public:
       PaperDoll();
       std::string get_Move();
       void setCounter(int);
      
   private:
       int counter;
       std::string choice;
};

#endif
