#include<stdio.h>
#include <corecrt_malloc.h>

struct linked_list {
	int number;
	node* next;
};

typedef struct linked_list node;

node* head = NULL; node* last = NULL;

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


void InsertNodeAtLastPostition(int value) {
	node* tempNode;
	tempNode = (node*)malloc(sizeof(node));
	tempNode->number = value;
	tempNode->next = NULL;

	// for the first element
	if (head == NULL) {
		head = tempNode;
		last = tempNode;
	}
	else {
		last->next = tempNode;
		last = tempNode;
	}
}

void InsertNodeAtFirstPosition(int value) {
	node* tempNode;
	tempNode = (node*)malloc(sizeof(node));

	tempNode->number = value;
	tempNode->next = NULL;

	if (head == NULL) {
		head = tempNode;
		last = tempNode;
	}
	else {
		tempNode->next = head;
		head = tempNode;
	}
}


void InsertNodeAtTheMiddlePosition(int key, int value) {
	node* myNode = head;
	int flag = 0;

	while (myNode != NULL) {
		if (myNode->number == key) {

			node* newNode;
			newNode = (node*)malloc(sizeof(node));
			newNode->number = value;

			newNode->next = myNode->next;
			myNode->next = newNode;

			flag = 1;
			break;
		}
		else {
			myNode = myNode->next;
		}
	}

	if (flag == 0) {
		printf("key not found");
	}
}