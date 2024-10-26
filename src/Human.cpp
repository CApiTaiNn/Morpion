#include "../include/Human.h"
#include <iostream>


Human::Human(int s) : Player(s) {}

tab Human::jouer(sf::RenderWindow& window) {
    tab coord = { -1, -1 }; // Initialisation des coordonnées à des valeurs invalides

    sf::Event event;
    while (true) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed){
                window.close();
                return coord;
            }
            
            if (event.type == sf::Event::MouseButtonPressed and event.mouseButton.button == sf::Mouse::Left) {
                int x = event.mouseButton.x;
                int y = event.mouseButton.y;

                std::cout << "x : " << x << "y : " << y << std::endl;

                if (y > 0 and y < 300) { // Première ligne
                    coord[0] = 0;
                    if (x > 0 and x < 300) coord[1] = 0;
                    else if (x >= 300 and x < 600) coord[1] = 1;
                    else if (x >= 600 and x < 900) coord[1] = 2;
                } else if (y >= 300 and y < 600) { // Deuxième ligne
                    coord[0] = 1;
                    if (x > 0 and x < 300) coord[1] = 0;
                    else if (x >= 300 and x < 600) coord[1] = 1;
                    else if (x >= 600 and x < 900) coord[1] = 2;
                } else if (y >= 600 and y < 900) { // Troisième ligne
                    coord[0] = 2;
                    if (x > 0 and x < 300) coord[1] = 0;
                    else if (x >= 300 and x < 600) coord[1] = 1;
                    else if (x >= 600 and x < 900) coord[1] = 2;
                }
                std::cout << coord[0] << " | " << coord[1] << std::endl;
                return coord; // Sortir de la boucle après un clic
            }             
        }
    }

    return coord;
}


tab Human::jouer() {
    // Cette méthode peut rester vide ou retourner une valeur par défaut
    return { -1, -1 };
}