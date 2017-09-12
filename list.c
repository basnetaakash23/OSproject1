#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>


struct list{
    char* value;
    struct list* next;
};


struct list* create_list(){
    struct list *ptr = (struct list*)malloc(sizeof(struct list));
    ptr->value = NULL;
    ptr->next = NULL;
    return ptr;

}

int add_to_list(struct list* list1, char* item){
    /*if(create_list()==NULL){
        struct list *ptr1 = (struct list*)malloc(sizeof(struct list));
        ptr1 = create_list();
        }
        */
        printf("Inside Add_to_list function\n");
        printf("%s",item);
        printf("\n");
        printf("Displayed item\n");


        while(list1->value!=NULL){                                    /*runs until l1->next is not null*/
         /*  /// printf(l1->value);

            ///printf("Inside while loop\n");
            ///printf("\n");
            */
             printf("Inside while loop\n");
             list1 = list1->next;
             printf("Traversing\n");
             /*printf("%s\t",l1->value);*/
             printf("%s\t",list1->value)
        }

        printf("I reached until here\n");
        struct list* new_node = (struct list*)malloc(sizeof(struct list));
        printf("The length of item is: ");
        new_node->value = malloc(strlen(item)+1);
        strcpy(new_node->value, item);
        new_node->next = NULL;
        list1 = new_node;

       /* printf("%s", l1->value); */

        return 1;
    }



void print_list(struct list* list1){
    while(list1!=NULL){
        printf("%s\t",list1->value);
        list1 = list1->next;
    }
}

/*char * remove_from_list(list* l1){

    }
    */

int main(){

 struct list* l1;
 struct list* temp;

 char value;
 char reply = 'Y';
 int val;

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