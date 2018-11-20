#include <stdio.h>
#include <stdlib.h>





int main(int argc , char* argv[]){
  #ifdef TOTO
  printf("toto est défini\n");
  #else
  printf("toto n'est pas defini\n");
  #endif
  return 0;


}
