#include <string>
#include <iostream>
#include "Avalanche.h"

using namespace std;

Avalanche::Avalanche() : Player("Avalanche") {}

string Avalanche::get_Move()
{
   choice = "R"; // Always picks rock
   return choice;
}


