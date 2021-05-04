#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>


/* Check */
/* Fonction permettant d'allouer de la mémoire à la matrice */
int** allouer(int lignes, int colonnes){
    int** p_tab;
    p_tab = malloc(lignes *sizeof(int*));
    for(int i=0; i < lignes; i++){
        p_tab[i] = malloc(colonnes *sizeof(int));
    }
    return p_tab;
}

/* Check */
/* Procédure permettant d'initialiser les valeurs de la matrice */
void initialiser(int** p_mat, int lignes, int colonnes){
    for(int i=0; i < lignes; i++){
        for(int j=0; j < colonnes; j++){
            p_mat[i][j] = 0;
        }
    }

}

/* Check */
/* Procédure permettant d'afficher le matrice */
void afficher(int** p_matrice, int lignes, int colonnes){
    printf("\n");
    for(int i=0; i<lignes; i++) {
        printf("===");
    }
    printf("\n");
    for(int i=0; i < lignes; i++) {
        for(int j=0; j < colonnes; j++) {
            printf("|");
            if(p_matrice[i][j] == 1) {
                printf("\033[104m  \033[0m");
            }
            else {
                printf("\033[99m  \033[0m");
            }
        }
        printf("\n");

    }
    for(int i=0; i<lignes; i++) {
        printf("===");
    }
    printf("\n");
}


int voisins(int** p_mat, int ligne,int colonne, int lignes, int colonnes, int torique){
    int cpt = 0;
    

    if (!torique){   //matrice finie
       
        for(int i=ligne-1;i<ligne+2;i++){
            for(int j=colonne-1;j<colonne+2;j++){
                if (0<=i && i<lignes && 0<=j && j<colonnes && (i!=ligne || j!=colonne)){
                    cpt += p_mat[i][j];
                }
            }
        }
        
    }
    else{
        int x,y;
        for(int i=ligne-1;i<ligne+2;i++){
            for(int j=colonne-1;j<colonne+2;j++){
                if (i!=ligne || j!=colonne){
                    if (0<=i && i<lignes && 0<=j && j<colonnes){
                        cpt += p_mat[i][j];
                    }
                    else{
                        x=i;
                        y=j;
                        if (i==lignes){x=0;}
                        if (i==-1){x=lignes;}

                        if (j==colonnes){y=0;}
                        if (j==-1){y=colonnes;}

                        cpt += p_mat[x][y];
                    }
                }
            }
        }
    }
    return cpt; //retourne le nombre de cellules voisines vivantes
}





int etat(int** p_mat, int nb_voisins, int x, int y){    
    int cel = p_mat[x][y];

    if ((nb_voisins == 3 && cel == 0) || (nb_voisins == 2 || nb_voisins == 3)){ //naissance ou survie
        return 1;
    }
    else{
        return 0;
    }
}


void copieMatrice(int** p_mat1, int** p_mat2, int lignes, int colonnes){   //la matrice 2 prends la valeur de la 1
    for (int i=0;i<lignes;i++){
        for (int j=0;j<colonnes;j++){
            p_mat2[i][j] = p_mat1[i][j];
        }
    }
}

void liberer(int** p_mat, int lignes){ //liberation de mémoire
    for(int i=0;i<lignes;i++){
        free(p_mat[i]);
    }
    free(p_mat);
    p_mat = NULL;
}

