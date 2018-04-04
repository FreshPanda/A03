#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include "Referee.h"

using namespace std;

string Referee::evaluate(Player *p1, Player *p2)
{
   string p1move, p2move, winner;
   bool isval;

   p1move = p1->get_Move(); // Perform p1's move
   p2move = p2->get_Move(); // Perform p2's move

   // If either p1 or p2 are advanced computers they need to store the others answer
   if(p1->getName() == "RandomComputer")
   {
       p1->notify(p2move);
   }

   if(p2->getName() == "RandomComputer")
   {
       p2->notify(p1move);
   }

   isval = checkValid(p1move);
   if(!isval)
   {
       return "-"; // If either move is invalid return invalid
   }
  
   isval = checkValid(p2move);
   if(!isval)
   {
       return "-"; // If either move is invalid return invalid
   }

   winner = Results(p1move, p2move);
   return winner;

}


bool Referee::checkValid(string choice)
{
   if ((choice == "S") or (choice == "R") or (choice == "P")) // All valid moves
   {  
       return 1;
   }
   return 0;
}

string Referee::Results(string p1move, string p2move)
{

   // These if statements are just the implementation of the rules of rock paper scissors
   if(p1move == "R")
   {
       if(p2move == "P" )
       {
           return "p2";
       }
       else if(p2move == "R")
       {
           return "T";
       }
       else if(p2move == "S")
       {
           return "p1";
       }
   }
   else if(p1move == "P")
   {
       if( p2move == "P" )
       {
           return "T";
       }
       else if(p2move == "R")
       {
           return "p1";
       }
       else if(p2move == "S")
       {
           return "p2";
       }
   }
   else if(p1move == "S")
   {
       if(p2move == "P" )
       {
           return "p1";
       }
       else if(p2move == "R")
       {
           return "p2";
       }
       else if(p2move == "S")
       {
           return "T";
       }
   }
   return 0; // Remove Warning Flag

}
