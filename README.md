# Projet Algorithmique fin 1ere année CY-Tech

## Le Jeu de la Vie

Le Jeu de la Vie a été inventé par John Horton Conway en 1970. Ce n'est pas un jeu approprement parlé pusiqu'il ne nécessite aucun joueur.
Mais c'est plutôt un automate cellulaire. Partant d'une organisation de différentes cellules de départ, celles-ci vont, au cours de l'exécution
du programme, évoluer suivant un shéma de règles bien précises.

Règle n°1 : une cellule reste en vie si elle est entourée de deux ou trois cellules voisines (en sachant q'une cellule peut avoir au maximum 8
cellules voisines).

Règle n°2 : une cellule meurt d'isolement si elle est entourée d'une seule cellule voisine ou une cellule meurt si elle est entourée d'au moins
4 cellules voisines.

Règles n°3 : une cellule prend vie si elle est entourée d'exactement 3 cellules voisines.

## Utilisation
  
  <ol>Dans la console :  
      <li>- compiler le fichier fonctions.c et le fichier main.c en utilisant la commande</li>    
      <li><li><pre><code>make clean</code></pre></li></li> 
      (pour être sur d'avoir toutes les modifications)  
      puis la commande   
      $ make  
      - ensuite utiliser la commande cat motifs/nomDuMotif.txt | ./exe qui permet d'accéder au dossier motifs contenant tous les motifs de départ
      à savoir :   
          * canon.txt  
          * planeur.txt  
          * clignotant.txt  
          * grenouille.txt  
          * boule.txt  
          * illuminati.txt  
          * github.txt  
          * discord.txt  
          * nvidia.txt  
          * cy-tech.txt  
          * vache.txt  
          * mandala.txt  
          * aireisti.txt  
  </ol>
