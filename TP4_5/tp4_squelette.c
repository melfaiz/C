#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct tree{
  int value; /* valeur de l'operande */
  char operator; /* operateur */
  struct tree *left; /* sous-arbre gauche */
  struct tree *right; /* sous-arbre droite */
} node_t;


/*  Construction de l'arbre binaire */
node_t *build_tree(char *argv[], int *position){
  node_t *p = NULL;
  
  
  return p;  
}

/* En utilisant la recursivite de la structure, affichez l'arbre sous forme infixe :
on trouve un nombre, on l'affiche, sinon on accède aux sous arbres pour afficher le 
sous abre de gauche, puis l'operateur, puis le sous arbre de droite */
void print_infix(node_t* n){
  
  
}

/* Calcul du resultat, toujours grace a la recursivite, si c'est un nombre, c'est le 
resultat que retourne la fonction, sinon si c'est un operateur on evalue les sous arbres 
qui seront les operandes de cet operateur */
int compute_tree(node_t *root){
  int res = 0;
  
  return res;  
}

int main(int argc,  char **argv)
{
  node_t *root = NULL;
  
  /* int position = ...; */
  
  /* root=build_tree(argv,...); */
  
  /* print_infix(root); */
  
  /* printf("...", compute_tree(root)); */
  
  return 0;
}
