#include <SFML/Graphics.hpp>
#include "include/Game.h"
#include "include/Plate.h"
#include "include/Human.h"
#include "include/IA.h"

int main() {

    // Initialiser le jeu
    Plate plateau;
    Human joueur1(0);
    IA joueur2(1, &plateau);
    Game game(joueur1, joueur2, &plateau);

    game.start();

    return 0;
}