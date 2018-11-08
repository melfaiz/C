#include <stdio.h>
#include <stdlib.h>

int main() {
  int A[]={12,23,34,45,56,67,89,90};
  int *p=A;
  printf("%i\n",&p+1);
  return 0;
}
