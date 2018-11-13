#include <stdio.h>
#include <stdlib.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b



int my_str_len( char string[] ){
  int i = 0;
  while (string[i] != '\0') {
    i++;
  }
  return i;
}


int my_str_copy(char string1[] , char string2[]){
  for (int i = 0; i<my_str_len(string1) ; i++) {
    string2[i] = string1[i] ;
  }
  return 0;
}

int my_str_copy2(char string1[] , char string2[]){
  int i = 0 ;
  while( (string2[i] = string1[i]) != '\0' ){
    i++;
  }
  return 0;
}



int main() {
  char str[] = "HELLO WORLD";
  char mot[my_str_len(str)];
  my_str_copy2(str,mot) ;
  printf("%s\n",mot );
  return 0;
}
