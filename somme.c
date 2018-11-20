#include <stdio.h>
#include <stdlib.h>


int somme (int a,int b)
{
  return(a+b);
}
int produit (int a,int b)
{
  return(a*b);
}



int main()
{
  int a;
  int b;
  char c;
  printf("Entrer a et b :\n");
  scanf("%d %d",&a,&b );
  printf("Entrer l'operation a effectuer :\n");
  scanf("%c\n",&c );
  if (c=='+')
  {
    printf("le resultat est : %d\n",somme(a,b));
  }
  else if (c=='*')
  {
    printf("le resultat est : %d\n",produit(a,b));
  }
  return 0;

}
