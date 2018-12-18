#include <stdio.h>
#include <stdlib.h>



typedef struct Element {
  int data; //int is the type of the stored data
  struct Element* next  ; //pointer to the next element
} Element;

void push(Element* head,int x){

  //initialising the temporary Element
  Element* temp = malloc(sizeof(Element));
  temp -> data = x;
  temp -> next = NULL ;

  Element* current = head;

  while (current -> next != NULL){
    current = current -> next;
  }

  //pushing the element
  current -> next = temp;

}

void print(Element* head){
  printf("PRINTING THE LIST :\n");
  printf("- - - - - -\n");
    Element* current = head ;
    current = current -> next;

    while (current != NULL) {
      printf("%d",current->data);
      current = current -> next;
      printf(" | ");
    }
  printf("\n- - - - - -\n");

}

void fill(Element* head){
  printf("How many element ? ");
  int n;
  scanf("%d",&n );
  for (int i = 1; i <= n; i++) {
    printf("Enter number %i : ",i );
    int nb;
    scanf("%d",&nb);
    push(head,nb);
  }
}


int main()
{
  Element* list = NULL;
  list = malloc(sizeof(Element));

  fill(list);
  print(list);

}
