#include <string>
#include <iostream> //remove this
#include <cstdlib>
#include "RandomComputer.h"

using namespace std;


RandomComputer::RandomComputer() : Player("RandomComputer"){ }

void RandomComputer::notify(string res)
{
   _moves.push_back(res);
}

string RandomComputer::get_Move()
{
   if(_moves.size() > 0)   // Checking the back of the vector (which contains its opponents answers) and then chosing the latest answer
   {
       if(_moves.back() == "R")
       {
           return "R";
       }
       else if(_moves.back() == "P")
       {
           return "P";
       }
       else if(_moves.back() == "S")
       {
           return "S";
       }
      
   }
   else
   {
       int keyboard = rand() % 2; // Randomising the first input because the AdvancedComputer cannot play a previous move if there is none
       if (keyboard == 0)
       {
           return "R";
       }
       else if(keyboard == 1)
       {
           return "P";
       }
       else if(keyboard == 2)
       {
           return "S";
       }
   }
   return 0; // Remove Warning Flag
}
