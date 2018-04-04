#include <string>
#include <iostream>
#include "Bureaucrat.h"

using namespace std;

Bureaucrat::Bureaucrat() : Player("Bureaucrat") {}

string Bureaucrat::get_Move()
{
   choice = "P"; // Always picks paper
   return choice;
}
