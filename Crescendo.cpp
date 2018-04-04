#include <string>
#include <iostream>
#include "Crescendo.h"

using namespace std;

Crescendo::Crescendo() : Player("Crescendo") {
   counter = 0;
}

void Crescendo::setCounter(int c2)
{
   counter = c2; // This ctr will be reset so the AI is 'reset' each round
}

string Crescendo::get_Move()
{
   if (counter == 0)
   {
       return "P";
   }
   else if (counter == 1)
   {
       return "S";
   }
   else if (counter == 2)
   {
       return "R";
   }
   return 0; // Remove Warning Flag
}
