#include <string>
#include <iostream>
#include "PaperDoll.h"

using namespace std;

PaperDoll::PaperDoll() : Player("PaperDoll") {
   counter = 0;
}

void PaperDoll::setCounter(int c2)
{
   counter = c2;
}


string PaperDoll::get_Move()
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
       return "S";
   }
   return 0; // Remove Warning Flag
}
