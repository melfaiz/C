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

int position = 1;

/*  Construction de l'arbre binaire */
node_t *build_tree(char **argv){
  node_t *p = NULL;
  p = malloc(sizeof(node_t));
  int i = position;
  if (isdigit(*argv[i])) {
      p -> value = atoi(argv[i]);
      p -> operator = 0;
      p -> left = NULL ;
      p -> right = NULL ;
    }else{
           p -> operator = *argv[i];
           position += 1 ;
           p->left = build_tree(argv);
           position += 1 ;
           p->right = build_tree(argv);
    }
  return p;
}

/* En utilisant la recursivite de la structure, affichez l'arbre sous forme infixe :
on trouve un nombre, on l'affiche, sinon on accède aux sous arbres pour afficher le
sous abre de gauche, puis l'operateur, puis le sous arbre de droite */
void print_infix(node_t* n){
  if ( n->operator != 0 ) {
    printf("( ");
    print_infix(n->left);
    printf(" %c ", n->operator);
    print_infix(n->right);
    printf(")");
  }
  if ( n->left == NULL && n->right == NULL) {
    printf("%i", n->value );
  }
}


/* Calcul du resultat, toujours grace a la recursivite, si c'est un nombre, c'est le
resultat que retourne la fonction, sinon si c'est un operateur on evalue les sous arbres
qui seront les operandes de cet operateur */
int compute_tree(node_t *root){
  int res = 0;

  if(root->operator == '+'){
    res = compute_tree(root->left) + compute_tree(root->right);
  }else if (root->operator == '*') {
    res = compute_tree(root->left) * compute_tree(root->right);
  }else if (root->operator == '-') {
    res = compute_tree(root->left) - compute_tree(root->right);
  }
  if( root->left == NULL && root->right == NULL) {
      res = root->value ;
  }

  return res;
}


int main(int argc,  char **argv)
{

  node_t *root = malloc(sizeof(node_t));
  root = build_tree(argv);

  printf("L'expression est :");
  print_infix(root);
  printf("\n");

  printf("Le resultat est : %i", compute_tree(root));
  printf("\n");

  return 0;
}
