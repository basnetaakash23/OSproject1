Aakash Basnet
Operating Systems Project 1 Version 3

This is the documentation for linked list data structure that we implemented in C. In order to implement linked list data structure in C, I first created a struct for list which contains head node. Similarly I also constructed Node using struct data type. Each Node has some value and a pointer to the next node. 

In order to implement Linked list, I created a number of functions:

Node * createnode(char* data)
	This function creates a new node based on pointer to the character value provided. Later we pass the new node created to the caller fuction which in our case is add_to_list function.

List* create_list()
	This function allocates the memory for the list and sets the head node of the list to null. At the end it returs the list. We call this function only once.

int add_to_list(List* list1, char* item)
	This function is used to add item to the list. Pointer to the list and item is provided. The create node function is called from this fucntion and the new node that was created is finally added to the end of the list that was passed as a parameter. 

void print_list(List* list)
	This fucntion is used to print the value of all the nodes in the list.

char * remove_from_list(List* l1)
	This fucntion removes the last item in the list and after removing the item from the list, this fucntion then returns the pointer to the node to the main fucntion.

void flush_list(List* l1)
	This function frees all the nodes in the list and sets the head node of the list to null at the end.

void free_list(List *l1)
	This function frees the memory that was allocated for the value of the node as well as node itself.
