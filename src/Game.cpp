#include "../include/Game.h"
#include <iostream>

typedef std::array<int, 2> tab;

Game::Game(Human h, IA ia, Plate* p) : joueur(h), pc(ia), plateau(p) {}

void Game::start() {
    tab coordJ;
    tab coordIA;

    // Créer une fenêtre SFML
    sf::RenderWindow window(sf::VideoMode(900, 900), "Morpion");

    // Boucle principale de la fenêtre
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }

        
        plateau->afficher(window);  // Afficher le plateau dans la fenêtre SFML
        plateau->afficher();
        window.display();

        // Tour du joueur
        bool joueurTour = true;
        while (joueurTour && window.isOpen()) {
            tab coord = joueur.jouer(window);  // Appeler la méthode jouer de Human
            if (plateau->verifCase(coord)) {
                plateau->placerSym(coord, joueur.getSymbole());
                joueurTour = false;
                plateau->afficher();
            }

            
            plateau->afficher(window);  // Afficher le plateau dans la fenêtre SFML
            window.display();
        }


        if (plateau->gagnant()) {
            std::cout << "Vous avez gagne !" << std::endl;
            break;
        }

        std::cout << "Tour du pc" << std::endl;

        // Tour de l'IA
        coordIA = pc.jouer();
        plateau->placerSym(coordIA, pc.getSymbole());

        if (plateau->gagnant()) {
            std::cout << "Le pc a gagne !" << std::endl;
            plateau->afficher(window);
            plateau->afficher();
            window.display();
            break;
        }
    }
}