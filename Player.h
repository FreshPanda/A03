#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
   public:
       Player(std::string);
       std::string getName();
       virtual std::string get_Move();
       virtual void setCounter(int); // Used only in crescendo fisftfull and paperdoll
       virtual void notify(std::string); // used only in AdvancedComputer
      
   private:
       std::string name;
      
};

#endif
