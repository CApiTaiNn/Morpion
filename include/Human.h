#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <SFML/Graphics.hpp>

class Human : public Player {
public:
    Human(int s); 
    tab jouer(sf::RenderWindow& window); 
    tab jouer()override;

};

#endif
