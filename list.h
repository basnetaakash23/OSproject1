#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char* value;
    struct list* next;
}Node;

typedef struct list{
    Node* head;
}List;


List* create_list();
int add_to_list(List* list1, char* item);
void print_list(List* list);
char * remove_from_list(List* l1);
void flush_list(List* l1);
void free_list(List *l1);

#endif
