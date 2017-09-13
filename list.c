#include "list.h"

Node * createnode(char* data);


Node * createnode(char* data){
    printf("I am here\n");
    Node * newNode = malloc(sizeof(Node));
    newNode->value = malloc(strlen(data)+1);
    strcpy(newNode->value, data);
    newNode->next = NULL;
    return newNode;
}


List* create_list(){

    List * list = malloc(sizeof(List));
    list->head = NULL;
    return list;

}

int add_to_list(List* list1, char* item){
    /*if(create_list()==NULL){
        struct list *ptr1 = (struct list*)malloc(sizeof(struct list));
        ptr1 = create_list();
        }
        */





        Node * current = list1->head;
        if(list1->head == NULL){
        list1->head = createnode(item);
        }
        else{
           current = list1->head;
           while(current->next!=NULL){
              current = current->next;
           }
           current->next = createnode(item);
        }



        /*

        printf("I reached until here\n");
        struct list* new_node = (struct list*)malloc(sizeof(struct list));
        printf("The length of item is: ");
        new_node->value = malloc(strlen(item)+1);
        strcpy(new_node->value, item);
        new_node->next = NULL;
        list1 = new_node;
        */

       /* printf("%s", l1->value); */


        return 1;
    }



void print_list(List* list){

    Node * current = list-> head;

    if(list->head == NULL)
       return;

    while(current->next!=NULL){
        printf("I am inside print list\n");
        printf("%s\t\n",current->value);
        current = current->next;
    }
    printf("I reached here\n");
    printf("%s\t",current->value);
}

char * remove_from_list(List* l1){

    Node * current = l1->head;
    Node * previous = current;
    while(current->next!=NULL){
        previous = current;
        current = current->next;
    }

    previous->next = NULL;
    return current->value;


}

void flush_list(List* l1){
   Node * current = l1-> head;
   Node * next;
   while(current!=NULL)
   {
       next = current->next;
       free(current);
       current = next;
   }
   l1->head = NULL;
}

void free_list(List *l1){
   Node * current = l1-> head;
   Node * next;
   while(current!=NULL)
   {
       next = current->next;
       free(current->value);
       free(current);
       current = next;
   }


}