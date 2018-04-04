#include <string>
#include <iostream>
#include "Human.h"

using namespace std;

Human::Human() : Player("Avalanche") {}

string Human::get_Move()
{
   string humanChoice;
   cin >> humanChoice;
   return humanChoice;
}


