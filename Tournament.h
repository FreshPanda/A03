#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include <string>
#include <vector>
#include "Player.h"
#include "Referee.h"

class Tournament {
public:
    void addPlayers(Player*);
    std::string print_scores();
private:
    std::vector<Player*> Round1;
    std::vector<Player*> Round2;
    std::vector<Player*> Round3;
};

#endif
