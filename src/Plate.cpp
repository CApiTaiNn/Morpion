#include "../include/Plate.h"
#include <iostream>
#include <string.h>

Plate::Plate() {
    for (int i = 0; i < taille; i++) {
        for (int j = 0; j < taille; j++) {
            grille[i][j] = -1; 
        }
    }

    if (!font.loadFromFile("./font/coolvetica rg.otf")) {
        std::cout << "Erreur de chargement de la police" << std::endl;
    }
}



void Plate::afficher() {
    std::cout << " --- --- ---" << std::endl;
    for (int i = 0; i < taille; i++) {
        std::cout << "| ";
        for (int j = 0; j < taille; j++) {
            char symbol;
            if (grille[i][j] == -1) {
                symbol = ' ';
            } else if (grille[i][j] == 0) {
                symbol = 'X';
            } else {
                symbol = 'O';
            }
            std::cout << symbol << " | ";
        }
        std::cout << std::endl;
        std::cout << " --- --- --- " << std::endl;
    }
}

//Test de l'affichage de la fenetre
void Plate::afficher(sf::RenderWindow& window) {
    // Définir les lignes de la grille
    sf::RectangleShape horizontalLine1(sf::Vector2f(900, 5));
    sf::RectangleShape horizontalLine2(sf::Vector2f(900, 5));
    sf::RectangleShape verticalLine1(sf::Vector2f(5, 900));
    sf::RectangleShape verticalLine2(sf::Vector2f(5, 900));

    // Positionner les lignes de la grille
    horizontalLine1.setPosition(0, 300);
    horizontalLine2.setPosition(0, 600);
    verticalLine1.setPosition(300, 0);
    verticalLine2.setPosition(600, 0);

    window.draw(horizontalLine1);
    window.draw(horizontalLine2);
    window.draw(verticalLine1);
    window.draw(verticalLine2);

    for (int i = 0; i < taille; i++){
        for (int j = 0; j < taille; j++){
            sf::Text text;
            text.setFont(font);
            text.setCharacterSize(100);
            text.setFillColor(sf::Color::White);
            text.setStyle(sf::Text::Bold);
            text.setPosition(j*300+100, i*300+100);
            if (grille[i][j] == -1){
                text.setString(" ");
            } else if (grille[i][j] == 0){
                text.setString("X");
            } else {
                text.setString("O");
            }
            window.draw(text);
        }
        
    }
    
}

bool Plate::verifCase(tab c) {
    return grille[c[0]][c[1]] == -1;
}

void Plate::placerSym(tab c, int s) {
    if (verifCase(c)) {
        grille[c[0]][c[1]] = s;
    } else {
        std::cout << "La case est déjà occupée." << std::endl;
    }
}



bool Plate::gagnant(){
    // ligne
    for (int i = 0; i < taille; i++) {
        if (grille[i][0] != -1 && grille[i][0] == grille[i][1] && grille[i][0] == grille[i][2]) {
            return true;
        }
    }
    // colonne
    for (int j = 0; j < taille; j++) {
        if (grille[0][j] != -1 && grille[0][j] == grille[1][j] && grille[0][j] == grille[2][j]) {
            return true;
        }
    }
    // diagonal
    if (grille[0][0] != -1 && grille[0][0] == grille[1][1] && grille[0][0] == grille[2][2]) {
        return true;
    }
    if (grille[0][2] != -1 && grille[0][2] == grille[1][1] && grille[0][2] == grille[2][0]) {
        return true;
    }
    return false;
}

int Plate::getGrille(int i, int j) const{
    return grille[i][j];
     
}
