#ifndef TOOLBOX_H
#define TOOLBOX_H
#include <string>
#include "Player.h"

class Toolbox : public Player {
   public:
       Toolbox();
       std::string get_Move();
    
   private:
       std::string choice;
      
};

#endif
