#ifndef RandomComputer_H
#define RandomComputer_H
#include <string>
#include "Player.h"
#include <vector>


class RandomComputer : public Player {
   public:
       RandomComputer();
       std::string get_Move();
       void notify(std::string res);
    
   private:
       std::vector<std::string> _moves;
       int keyboard;
};

#endif


