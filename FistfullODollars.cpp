#include <string>
#include <iostream>
#include "FistfullODollars.h"

using namespace std;

FistfullODollars::FistfullODollars() : Player("FistfullODollars") {
   counter = 0;
}

void FistfullODollars::setCounter(int newCtr)
{
   counter = newCtr; // This ctr will be reset so the AI is 'reset' each round
}


string FistfullODollars::get_Move()
{
   if (counter == 0)
   {
       return "R";
   }
   else if (counter == 1)
   {
       return "P";
   }
   else if (counter == 2)
   {
       return "P";
   }
   return 0; // Remove Warning Flag
}
