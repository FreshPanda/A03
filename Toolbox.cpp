#include <string>
#include <iostream>
#include "Toolbox.h"

using namespace std;

Toolbox::Toolbox() : Player("Toolbox") {}

string Toolbox::get_Move()
{
   choice = "S"; // Always picks scissors
   return choice;
}
