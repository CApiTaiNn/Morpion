#ifndef GAME_H
#define GAME_H

#include "Plate.h"
#include "Human.h"
#include "IA.h"

class Game {
private:
    Human joueur;
    IA pc;
    Plate* plateau;
public:
    Game(Human h, IA ia, Plate* p);
    void start();
};

#endif
