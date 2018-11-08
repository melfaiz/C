#include <stdio.h>
#include <stdlib.h>



typedef struct pile_t {
  int valeur;
  struct pile *precedent;
} pile_t;



pile_t *MaPile = NULL;

pile_t PILE ;

void empiler(int valeur){

  MaPile = &PILE;





}




int depiler(void);










int main()
{
  int N;
  printf("ENTRER UN NOMBRE ENTIER");
  scanf("%i",&N);

  if (N!=0) {
    empiler(N);
  }else{
    depiler();
  }



};
