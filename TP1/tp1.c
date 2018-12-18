#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nb_caracteres(char chaine[]){
  int N = strlen(chaine);
  //Transformer en miniscule
  int i=0;
  while (chaine[i] != '\0') {
    if ('a' > chaine[i] ) {
      chaine[i]+=32;
    }
    i++;
  }

  //remplace les doublons par 0 dans chaine2
  char chaine2[N];
  for (size_t i = 0; i < N; i++) {
    chaine2[i] = chaine [i] ;
  }
  for (size_t i = 0; i < N; i++) {
    for (size_t j = i+1 ; j < N; j++) {
      if (chaine2[j] == chaine[i]) {
        chaine2[j] = 0 ;
      }
    }
  }


  for (size_t i = 0; i < N; i++) {

    if (chaine2[i] != 0) {
      int s=0;
      for (size_t j = 0; j < N; j++) {
        if (chaine[j] == chaine2[i]) {
          s++ ;
        }
      }
      printf("%c : %d\n",chaine2[i],s);
    }
  }

}



int main(int argc, char const *argv[]) {

  char chaine[]="toTotaGHFFHHHKta";
  nb_caracteres(chaine);

  return 0;
}
