#include<stdio.h>
#include <corecrt_malloc.h>

struct linked_list {
	int number;
	node* next;
};

typedef struct linked_list node;



int main() {

	// memory allocation for int type variable
	//int* a;
	//a = (int*)malloc(sizeof(int));

	//printf("The memory address of a is %p\n", a);

	//scanf_s("%d", a);
	//printf("The value of a is %d", *a);

	// memory allocation for node type variable



	node* head;

	head = (node*)malloc(sizeof(node));

	printf("The addess of head %p", head);





	return 0;

}

void create_node(node* mylist)
{
	printf("Enter the number of node\n");
	scanf_s("%d", mylist->number);
	// node will end -99999 
	if (mylist->number == -99999) {
		mylist->next = NULL;
	}
	else {
		mylist->next = (node*)malloc(sizeof(node));
		create_node(mylist);
	}
}

void Print(node* myList) {
	printf("%d", myList->number);
	if (myList->next == NULL) {
		return;
	}
	Print(myList->next);
}


int CountListItem(node* myList) {
	if (myList->next == NULL) {
		return 0;
	}
	return (1 + CountListItem(myList->next));
}