#include <stdio.h>
#include <stdlib.h>



typedef struct Element {
  int data; //int is the type of the stored data
  struct Element* next  ; //pointer to the next element
} Element;


Element* head;

void Insert(int x){

  Element* temp = (Element*)malloc(sizeof(Element));
  temp -> data = x;
  temp -> next = NULL ;
  Element* pointer = head;
  if (pointer == NULL) {
    head = temp;
  }else{
    while (/* condition */) {
      /* code */
    }
    head -> next = temp;
  }


}

void Print(){
  Element* pointer = head;
  while ( pointer != NULL) {

    printf("%d\n", pointer -> data );
    pointer = pointer -> next;

  }
}


int main()
{




  head = NULL;

  printf("How many numbers ?\n");
  int n,x;
  scanf("%d",&n);
  for (size_t i = 0; i < n; i++) {
    printf("Enter the number :\n");
    scanf("%d",&x);
    Insert(x);
    Print();
  }

  printf("La liste est :\n");
  Print();

}
