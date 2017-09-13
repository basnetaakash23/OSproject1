#include "list.h"

Node * createnode(char* data);

<<<<<<< HEAD

Node * createnode(char* data){
    printf("I am here\n");
    Node * newNode = malloc(sizeof(Node));
    newNode->value = malloc(strlen(data)+1);
    strcpy(newNode->value, data);
    newNode->next = NULL;
    return newNode;
}


=======
typedef struct node{
    char* value;
    struct list* next;
}Node;

typedef struct list{
    Node* head;
}List;

Node * createnode(char* data){
    printf("I am here\n");
    Node * newNode = malloc(sizeof(Node));
    newNode->value = malloc(strlen(data)+1);
    strcpy(newNode->value, data);
    newNode->next = NULL;
    return newNode;
}


>>>>>>> ce57fcf1d54a6a6c9af4911200e8569d25600904
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
<<<<<<< HEAD
=======
        }
        else{
           current = list1->head;
           while(current->next!=NULL){
              current = current->next;
           }
           current->next = createnode(item);
>>>>>>> ce57fcf1d54a6a6c9af4911200e8569d25600904
        }
        else{
           current = list1->head;
           while(current->next!=NULL){
              current = current->next;
           }
           current->next = createnode(item);
        }



        /*



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
<<<<<<< HEAD
=======

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
>>>>>>> ce57fcf1d54a6a6c9af4911200e8569d25600904

    previous->next = NULL;
    return current->value;

<<<<<<< HEAD

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
=======
 List* l1;
 List* temp;

 char value;
 char reply = 'Y';
 int val;
 char* character_value;
>>>>>>> ce57fcf1d54a6a6c9af4911200e8569d25600904

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


<<<<<<< HEAD
}
=======
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

}



>>>>>>> ce57fcf1d54a6a6c9af4911200e8569d25600904
