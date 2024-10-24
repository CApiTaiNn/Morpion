#ifndef PLAYER_H
#define PLAYER_H

#include <array>

typedef std::array<int, 2> tab;

class Player {
protected:
    int symbole;
    tab coord; 
public:
    Player(int s);
    int getSymbole();  
    virtual tab jouer() = 0;
};

#endif
