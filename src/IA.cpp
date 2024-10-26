#include "../include/IA.h"
#include "../include/Plate.h"
#include <iostream>

IA::IA(int s, Plate *p) : Player(s), plateau(p) {}

/** 
tab IA::jouer() {
    tab coord = {0, 0};


    for (int i = 0; i < taille; i++) {
        for (int j = 0; j < taille; j++) {           


            if (plateau->getGrille(i, j) == 1 && (plateau->getGrille(i, j+1) == -1 && j <= 2)){
                coord[0] = i;
                coord[1] = j+1;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i, j-1) == -1 && j >= 0))
            {
                coord[0] = i;
                coord[1] = j-1;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i-1, j) == -1 && i >= 0))
            {
                coord[0] = i-1;
                coord[1] = j;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i+1, j) == -1 && i <= 2))
            {
                coord[0] = i+1;
                coord[1] = j;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i-1, j+1) == -1 && i >= 0 && j <= 2)){
                coord[0] = i-1;
                coord[1] = j+1;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i-1, j-1) == -1 && i >= 0 && j >= 0))
            {
                coord[0] = i-1;
                coord[1] = j-1;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i+1, j+1) == -1 && i <= 2 && j <= 2))
            {
                coord[0] = i+1;
                coord[1] = j+1;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i+1, j-1) == -1 && i <= 2 && j >= 0)){
                coord[0] = i+1;
                coord[1] = j-1;
                return coord;
            }else if (plateau->getGrille(i, j) == -1){
                coord[0] = i;
                coord[1] = j;
                return coord;
            }
        }
    }
    return coord;
}

*/

// test pour les symbole colle
tab IA::jouer() {
    tab coord = {0, 0};

    //Cherche si il trouve 2 symboles enemi pour bloquer les lignes
    for (int i = 0; i < taille; i++){
        if (plateau->getGrille(i, 0) == 0 && plateau->getGrille(i, 1) == 0 && plateau->getGrille(i, 2) == -1){
            coord[0] = i;
            coord[1] = 2;
            return coord;
        }

        if (plateau->getGrille(i, 1) == 0 && plateau->getGrille(i, 2) == 0 && plateau->getGrille(i, 0) == -1){
            coord[0] = i;
            coord[1] = 0;
            return coord;
        }

        if (plateau->getGrille(i, 0) == 0 && plateau->getGrille(i, 2) == 0 && plateau->getGrille(i, 1) == -1){
            coord[0] = i;
            coord[1] = 1;
            return coord;
        }
    }

    //Cherche si il trouve 2 symboles enemi pour bloquer les colonnes
    for (int j = 0; j < taille; j++){
       if (plateau->getGrille(0, j) == 0 && plateau->getGrille(1, j) == 0 && plateau->getGrille(2, j) == -1){
            coord[0] = 2;
            coord[1] = j;
            return coord;
        }

        if (plateau->getGrille(1, j) == 0 && plateau->getGrille(2, j) == 0 && plateau->getGrille(0, j) == -1){
            coord[0] = 0;
            coord[1] = j;
            return coord;
        } 

        if (plateau->getGrille(0, j) == 0 && plateau->getGrille(2, j) == 0 && plateau->getGrille(1, j) == -1){
            coord[0] = 1;
            coord[1] = j;
            return coord;
        }
    }



    //Cherche si il trouve 2 symboles enemi pour bloquer les diagonales
    //1ere diagonale
    if (plateau->getGrille(0,0) == 1 and plateau->getGrille(1,1) == 1 and plateau->getGrille(2,2) == 0){
        coord[0] = 2;
        coord[1] = 2;
        return coord;
    }
    else if (plateau->getGrille(1,1) == 1 and plateau->getGrille(2,2) == 1 and plateau->getGrille(0,0) == 0){
        coord[0] = 0;
        coord[1] = 0;
        return coord;
    }
    else if (plateau->getGrille(0,0) == 1 and plateau->getGrille(2,2) == 1 and plateau->getGrille(1,1) == 0){
        coord[0] = 1;
        coord[1] = 1;
        return coord;
    }


    //2e diagonale
    if(plateau->getGrille(0, 2) == 1 and plateau->getGrille(1,1) == 1 and plateau->getGrille(2,0) == 0){
        coord[0] = 2;
        coord[1] = 0;
        return coord;
    }
    else if (plateau->getGrille(1,1) == 1 and plateau->getGrille(2,0) == 1 and plateau->getGrille(0,2) == 0){
        coord[0] = 0;
        coord[1] = 2;
        return coord;
    }
    else if (plateau->getGrille(0,2) == 1 and plateau->getGrille(2,0) == 1 and plateau->getGrille(1,1) == 0){
        coord[0] = 1;
        coord[1] = 1;
        return coord;
    }


    
    


    //Verification des symboles collés sur les 3 lignes
    for (int i = 0; i < taille; i++) {
        if ( (plateau->getGrille(i, 0) == 1 and plateau->getGrille(i,1) == 1 ) and plateau->getGrille(i,2) == -1){ //si les deux premiers symboles sont collés
            coord[0] = i;
            coord[1] = 2;
            return coord;
        }else if ((plateau->getGrille(i, 1) == 1 and plateau->getGrille(i,2) == 1 ) and plateau->getGrille(i,0) == -1){ //si les deux derniers symboles sont collés
            coord[0] = i;
            coord[1] = 0;
            return coord;
        }else if ((plateau->getGrille(i, 0) == 1 and plateau->getGrille(i,2) == 1 ) and plateau->getGrille(i,1) == -1){//si le premier et le dernier symbole sont collés{
            coord[0] = i;
            coord[1] = 1;
            return coord;
        }
    }


    //Verification des symboles collés sur les 3 colonnes
    for (int j = 0; j < taille; j++){
        if ( (plateau->getGrille(0, j) == 1 and plateau->getGrille(1,j) == 1 ) and plateau->getGrille(2,j) == -1){
            coord[0] = 2;
            coord[1] = j;
            return coord;
        }else if ((plateau->getGrille(1, j) == 1 and plateau->getGrille(2,j) == 1 ) and plateau->getGrille(0,j) == -1){
            coord[0] = 0;
            coord[1] = j;
            return coord;
        }else if ((plateau->getGrille(0, j) == 1 and plateau->getGrille(2,j) == 1 ) and plateau->getGrille(1,j) == -1){
            coord[0] = 1;
            coord[1] = j;
            return coord;
        }
    }

    //1ere diagonale
    if (plateau->getGrille(0,0) == 1 and plateau->getGrille(1,1) == 1 and plateau->getGrille(2,2) == -1){
        coord[0] = 2;
        coord[1] = 2;
        return coord;
    }
    else if (plateau->getGrille(1,1) == 1 and plateau->getGrille(2,2) == 1 and plateau->getGrille(0,0) == -1){
        coord[0] = 0;
        coord[1] = 0;
        return coord;
    }
    else if (plateau->getGrille(0,0) == 1 and plateau->getGrille(2,2) == 1 and plateau->getGrille(1,1) == -1){
        coord[0] = 1;
        coord[1] = 1;
        return coord;
    }


    //2e diagonale
    if(plateau->getGrille(0, 2) == 1 and plateau->getGrille(1,1) == 1 and plateau->getGrille(2,0) == -1){
        coord[0] = 2;
        coord[1] = 0;
        return coord;
    }
    else if (plateau->getGrille(1,1) == 1 and plateau->getGrille(2,0) == 1 and plateau->getGrille(0,2) == -1){
        coord[0] = 0;
        coord[1] = 2;
        return coord;
    }
    else if (plateau->getGrille(0,2) == 1 and plateau->getGrille(2,0) == 1 and plateau->getGrille(1,1) == -1){
        coord[0] = 1;
        coord[1] = 1;
        return coord;
    }

    //Si un symbole est trouver alors on rajoute a coté ou c'est possible
    for (int i = 0; i < taille; i++) {
        for (int j = 0; j < taille; j++) {           


            if (plateau->getGrille(i, j) == 1 && (plateau->getGrille(i, j+1) == -1 && j <= 2)){
                coord[0] = i;
                coord[1] = j+1;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i, j-1) == -1 && j >= 0))
            {
                coord[0] = i;
                coord[1] = j-1;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i-1, j) == -1 && i >= 0))
            {
                coord[0] = i-1;
                coord[1] = j;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i+1, j) == -1 && i <= 2))
            {
                coord[0] = i+1;
                coord[1] = j;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i-1, j+1) == -1 && i >= 0 && j <= 2)){
                coord[0] = i-1;
                coord[1] = j+1;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i-1, j-1) == -1 && i >= 0 && j >= 0))
            {
                coord[0] = i-1;
                coord[1] = j-1;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i+1, j+1) == -1 && i <= 2 && j <= 2))
            {
                coord[0] = i+1;
                coord[1] = j+1;
                return coord;
            }else if (plateau->getGrille(i, j) == 1 &&  (plateau->getGrille(i+1, j-1) == -1 && i <= 2 && j >= 0)){
                coord[0] = i+1;
                coord[1] = j-1;
                return coord;
            }  
        }       
    }

    //sinon on joue aleatoirement
    int coord1, coord2;
    do {
        coord1 = rand() % 10;
        coord2 = rand() % 10;
    } while (plateau->getGrille(coord1, coord2) != -1);

    coord[0] = coord1;
    coord[1] = coord2;
    return coord;
}