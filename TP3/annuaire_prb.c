#include <stdio.h>
#include <stdlib.h>

#define NAME_LENGTH 100
#define ADDRESS_LENGTH 100
#define ANNUAIRE_SIZE 10

enum Sex
{
  MALE,
  FEMALE
};

struct Address
{
  char street[ADDRESS_LENGTH];
  int num;
};

struct Person
{
  char name[NAME_LENGTH];
  int age;
  enum Sex sex;
  struct Address address;
  int isEmpty;
};

/**
* addUser find an empty Person in the Annuaire array
* and fill it with given information
*/

void addUser(struct Person annuaire[],char name[], int age, enum Sex sex, char street[], int num){
  struct Address address = {{street},num};
  int i=0;
  while(i<ANNUAIRE_SIZE){
    if (annuaire[i].isEmpty) {
      struct Person person = {name,age,sex,address,0};
      annuaire[i] = person;
      break;
    }
    i++;
  }
}
/**
* Set all Person in the Annuaire array to empty
*/
void clear(struct Person annuaire[]){
  int i=0;
  while (i<ANNUAIRE_SIZE) {
    if (!annuaire[i].isEmpty) {
      annuaire[i].isEmpty = 1;
    }
    i++;
  }


}
/**
* Print all information about the Person named as given
* if it exists
*/
void findUser(struct Person annuaire[], char name[]){
  int i=0;
  while (i<ANNUAIRE_SIZE) {
    if (annuaire[i].name == name) {
      printf("NAME : %s\n",annuaire[i].name);
      printf("AGE : %i\n",annuaire[i].age);
      printf("SEX : %i\n",annuaire[i].sex);
      printf("STREET : %s\n",annuaire[i].address.street);
      printf("N° : %i\n",annuaire[i].address.num);
    }
  }


}


int main() {
  struct Person annuaire[ANNUAIRE_SIZE];
  addUser(annuaire,"EL FAIZ",20, MALE, "MDS", 11);
  findUser(annuaire,"EL FAIZ");
  return 0;
}
