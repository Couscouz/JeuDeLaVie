exe : fonctions.o main.o
  @echo "Compilation de l'exécutable"
  gcc fonctions.o main.o -o exe
 
 fonctions.o : fonctions.c fonctions.h
   @echo "Compilation de fonctions"
  gcc -c fonctions.c -o fonctions -o
 
 main.o : main.c fonctions.h
   @echo "Compilation du main"
  gcc -c main.c -o fonctions.h
  
  clean :
    @echo "On clean pour apporter les modifs"
    rm -f* .o
