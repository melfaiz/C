#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(int argc, char *argv[])
{
  {
    fprintf(stdout,"=============== test with int * ptr\n");
    int *ptr = malloc(sizeof(int));
    ptrdiff_t n = 0;

    fprintf(stdout,"Ptr addr : %p (%li)\n",ptr,ptr);

    //    ptr =  ptr + (int *)0; //ne compile pas
    ptr =  ptr + 0;

    fprintf(stdout,"Ptr + 0 : %p\n",ptr);

    ptr = ptr - 0;
    n = ptr - (int *)0;

    fprintf(stdout,"Ptr - 0 : %li %li\n",ptr,n);
    fprintf(stdout,"ptr/sizeof : %li\n",((ptrdiff_t)ptr)/sizeof(int));

  }

  return 0;
}
