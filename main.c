#include <stdlib>
#include <stdio.h>
#include <unistd.h>
#include "fonctions.h"
    
int main() {
  
    int lignes, colonnes;
    int tours, torique;  //matrice torique ou non
    int voisins;

    int** p_matrice;
    int** p_temp;

    scanf("%d %d",&colonnes, &lignes); //lecture fichier texte nb lignes/colonnes

    p_matrice = allouer(lignes, colonnes); //allocation mémoire lignes/colonnes
    p_temp = allouer(lignes, colonnes);

    /*Boucle de lecture du motif de départ dans le fichier texte*/
    for(int i=0; i < lignes; i++){        
        for( int j=0;j<colonnes;j++){
            scanf("%d",&p_matrice[i][j]);
        }
    }  

    scanf("%d %d",&tours, &torique);  //lecture nb tours et si la matrice est torique ou non
    
    afficher(p_matrice, lignes, colonnes);

    return 0;
     
}
