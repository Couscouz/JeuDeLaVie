#include <stdlib>
#include <stdio.h>
#include "fonctions.h"
    
int main() {

    int lignes, colonnes;
    int tours, torique;  //matrice torique ou non
    int voisins;

    int** p_matrice;
    int** p_temp;

    scanf("%d",&colonnes);
    scanf("%d",&lignes);
    
    printf("%d lignes et %d colo\n", lignes, colonnes);
    
    p_matrice = allouer(lignes, colonnes);
    p_temp = allouer(lignes, colonnes);

    for(int i=0; i < lignes; i++){
        for( int j=0;j<colonnes;j++){
            scanf("%d",&p_matrice[i][j]);
        }
    }  

    scanf("%d",&tours);
    scanf("%d",&torique);   
    
    afficher(p_matrice, lignes, colonnes);

    return 0;

    

    
}
