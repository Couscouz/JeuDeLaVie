#ifndef __fonctions_H_
#define __fonctions_H_




int** allouer(int taille);

void initialiser(int** p_matrice, int lignes, int colonnes);

void afficher(int** p_matrice, int lignes, int colonnes);

int voisinsFinie(int** p_mat, int ligne,int colonne)

int voisinsTorique(int** p_mat, int y,int x, int lignes, int colonnes)





int etat(int** p_mat, int nb_voisins, int y, int x)





void copieMatrice(int** p_mat1, int** p_mat2, int lignes, int colonnes)


void liberer(int** p_mat, int lignes)

#endif