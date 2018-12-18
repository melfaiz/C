#include "complexe.h"


complexe_t somme_complexe(complexe_t a,complexe_t b){
  int x = a.re + b.re ;
  int y = a.im + b.im ;
  complexe_t somme ={x,y};
  return somme;
}

complexe_t produit_complexe(complexe_t a,complexe_t b){
  int x = (a.re * b.re) - (b.im * a.im) ;
  int y = (a.re * b.im) + (a.im * b.re);
  complexe_t produit ={x,y};
  return produit;
}
