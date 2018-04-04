#ifndef Human_H
#define Human_H
#include <string>
#include "Player.h"
#include <vector>

class Human : public Player {
   public:
       Human();
       std::string get_Move();
};

#endif
