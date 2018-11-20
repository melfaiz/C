#include <stdio.h>
#include <stdlib.h>



int nb_bits(int n){
  int s=0;
  while(n){
    if (n & 1) {
      s++;
    }
    n >>= 1;
  }
  return s;
}

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  nb_bits(n);
  return 0;
}
