#ifndef __fonctions_H_
#define __fonctions_H_
/*----------------------------------------------------------*/
/* Les prototypes et signatures des fonctions et procédures */
/*----------------------------------------------------------*/


/*-----------------------------------------------------------*/
/* Name : allouer                                            */
/* Auteur : Rémi Couzi                                       */
/* Créée le : 27/04/2021                                     */
/* Description : Fonction permettant d'allouer de la mémoire */
/*-----------------------------------------------------------*/
int** allouer(int taille);


/*----------------------------------------------------------------------------*/
/* Name : initialiser                                                         */
/* Auteur : Rémi Couzi                                                        */
/* Créée le : 27/04/2021                                                      */
/* Description : Procédure permettant d'initialiser les valeurs de la matrice */
/*----------------------------------------------------------------------------*/
void initialiser(int** p_matrice, int lignes, int colonnes);


/*-----------------------------------------------------------------*/
/* Name : afficher                                                 */
/* Auteur : Léo Portet                                             */
/* Créée le : 27/04/2021                                           */
/* Description : Procédure permettant d'afficher la matrice du Jeu */
/*-----------------------------------------------------------------*/
void afficher(int** p_matrice, int lignes, int colonnes);


/*-------------------------------------*/
/* Name :  */
/* Auteur :  */ 
/* Créée le : */
/* Description : */
/*-------------------------------------*/
int voisinsFinie(int** p_mat, int ligne,int colonne);

  
  /*-------------------------------------*/
/* Name :  */
/* Auteur :  */ 
/* Créée le : */
/* Description : */
/*-------------------------------------*/
int voisinsTorique(int** p_mat, int y,int x, int lignes, int colonnes);


/*-------------------------------------*/
/* Name :  */
/* Auteur :  */ 
/* Créée le : */
/* Description : */
/*-------------------------------------*/
int etat(int** p_mat, int nb_voisins, int y, int x);


/*-------------------------------------*/
/* Name :  */
/* Auteur :  */ 
/* Créée le : */
/* Description : */
/*-------------------------------------*/
void copieMatrice(int** p_mat1, int** p_mat2, int lignes, int colonnes);


/*-------------------------------------*/
/* Name :  */
/* Auteur :  */ 
/* Créée le : */
/* Description : */
/*-------------------------------------*/
void liberer(int** p_mat, int lignes);

#endif
