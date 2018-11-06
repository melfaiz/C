#include <stdio.h>
#include <stdlib.h>



struct bidule {
  char a;
  long int c ;
  char b;

};


int main()
{
  printf("%lu\n",  sizeof(struct bidule));
  return 0;
}
