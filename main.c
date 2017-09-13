#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main(){

 List* l1;
 List* temp;

 char value;
 char reply = 'Y';
 int val;
 char* character_value;

 printf("Creating a linked list data structure\n");
 l1 = create_list();
 temp = l1;
 printf("Created \n");

 while(reply=='Y'){
	  l1 = temp;
	  printf("Enter the character you want to put in the linked list\n");
	  scanf("%s", &value);
	  val = add_to_list(l1, &value);
	  printf("Do you want to enter another item?(Y/N) \n");
	  scanf("%s", &reply);


 }
 printf("Adding item to the list has finished\n");
 print_list(l1);
 character_value = remove_from_list(l1);
 printf("Checking if I reached here\n");
 printf("%s\t\n", character_value);
 free(character_value);
 printf("%s\t\n", character_value);
 printf("I don't know if it has been freed\n");
 flush_list(l1);
 free_list(l1);
 return 0;

}