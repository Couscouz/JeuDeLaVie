#include <stdlib>
#include <stdio.h>
#include "fonctions.h"



int main{}{

    int lignes = 20;
    int colonnes = 20;   
    int torique;   //matrice torique ou non
    int voisins;

    int** p_matrice;
    int** p_temp;

    p_matrice = allouer(lignes, colonnes);
    p_temp = allouer(lignes, colonnes);

    //initialiser p_temp avec des 0


    for(int i=0; i<tours; i++){ //boucle principale

        for(int m=0;m<lignes;m++){
            for(int n=0;n<colonnes<;n++){

                //on recense tous les voisins d'une case
                //on calcule le nombre de chacun

                //on calcule la valeur de la case qu'on stocke dans une matrice temporaire
                p_temp[m][n] = etat(p_matrice, voisins, m, n);

                
            }
        }
        
        //on remplace la matrice temporaire dans la principale
        copieMatrice(p_temp, p_matrice, lignes, colonnes);

        //on rafraichie le terminal
        usleep(1000000);
        system("clear");

        //et on affiche notre nouvelle matrice
        afficher(p_matrice, HAUTEUR, LARGEUR);

    }
    printf("Vous aez fait %d tours\n", tours);

    liberer(p_matrice, LARGEUR)
    liberer(p_temp, LARGEUR)
    return 0;
}