#ifndef IA_H
#define IA_H

#include "Player.h"
#include "Plate.h"


class IA : public Player {
private:
    Plate* plateau;
public:
    IA(int s, Plate* p); 
    tab jouer() override;
};
#endif
