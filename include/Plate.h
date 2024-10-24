#ifndef PLATE_H
#define PLATE_H

#define taille 3
#include <array>
#include <SFML/Graphics.hpp>

typedef std::array<int, 2> tab;

class Plate {
private:
    int grille[taille][taille];
    sf::Font font;
public:
    Plate();
    void afficher();
    void afficher(sf::RenderWindow &window);
    void placerSym(tab coord, int s);
    bool verifCase(tab coord);
    bool gagnant();
    int getGrille(int i, int j) const;
};

#endif
