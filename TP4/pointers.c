#include <stdio.h>
#include <stdlib.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b



void swap(int* a,int* b){
  int temp = *b;
  *b=*a;
  *a=temp;
}

void order(int* a,int* b,int*c){
  if (*a > *b) {
    swap(a,b);
  }
  if(*b > *c){
    swap(b,c);
  }
  if (*a > *c) {
    swap(a,c);
  }
}

void min_max(int l, int t[], int *min, int *max){
  int ma = t[0];
  for (int i=0;i<l;i++) {
    if (ma < t[i]) {
      ma = t[i];
    }
  }
  int mi = t[0];
  for (int i=0;i<l;i++) {
    if (mi > t[i]) {
      mi = t[i];
    }
  }
  *min = mi;
  *max = ma;
}

char *stpcpy(char *dst, const char *src){
  int i=0;
  while (src[i] != '\0') {
    dst[i] = src[i];
    i++;
  }
  dst[i+1] = '\0';
  return dst ;
}



int main () {
   char* src="HELLO WORLD!";
   char* dest;
   *dest = stpcpy(dest, src);
   printf("Final copied string : %s\n", dest);
   return(0);
}
