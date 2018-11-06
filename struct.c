#include <stdio.h>
#include <stdlib.h>



typedef struct complexe {
  int re;
  int im;
} complexe;

complexe somme_complexe(complexe a,complexe b){
  int x = a.re + b.re ;
  int y = a.im + b.im ;
  complexe somme ={x,y};
  return somme;
}
complexe produit_complexe(complexe a,complexe b){
  int x = (a.re * b.re) - (b.im * a.im) ;
  int y = (a.re * b.im) + (a.im * b.re);
  complexe produit ={x,y};
  return produit;
}

int main()
{
  complexe i ={0,1};
  complexe j ={1,3};
  complexe s =somme_complexe(i,j);
  complexe p =produit_complexe(i,j);

  printf("La somme de i et j est : %i + i%i\n",s.re,s.im);
  printf("Le produit de i et j est : %i + i%i\n",p.re,p.im);


  return 0;

}
