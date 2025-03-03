#include<stdio.h>
#include <corecrt_malloc.h>
#include <stdlib.h>

typedef struct node Node;

struct node {
	int data;
	Node* left;
	Node* right;
};

Node* Create_Node(int value) {
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));

	if (newNode == NULL) {
		printf("No memory allocated for new node");
		exit(1);
	}
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;
}

void Create_Right_Node(Node* node, Node* right) {
	node->right = right;
}

void Create_Left_Node(Node* node, Node* left) {
	node->left = left;
}

Node* Create_Tree() {
	Node* two = Create_Node(2);
	Node* seven = Create_Node(7);
	Node* nine = Create_Node(9);

	Create_Left_Node(two, seven);
	Create_Right_Node(two, nine);
	Node* one = Create_Node(1);
	Node* six = Create_Node(6);
	Create_Left_Node(seven, one);
	Create_Right_Node(seven, six);
	Node* eight = Create_Node(8);
	Create_Right_Node(nine, eight);

	Node* five = Create_Node(5);
	Node* ten = Create_Node(10);

	Create_Left_Node(six, five);
	Create_Right_Node(six, ten);

	Node* three = Create_Node(3);
	Node* four = Create_Node(4);

	Create_Left_Node(eight, three);
	Create_Right_Node(eight, four);

	return two;
}

void PreOrder_Traversal(Node* node) {
	printf("%d\n", node->data);
	if (node->left != NULL) {
		PreOrder_Traversal(node->left);
	}
	if (node->right != NULL) {
		PreOrder_Traversal(node->right);
	}
}


void PostOrder_Traversal(Node* node) {
	if (node->left != NULL) {
		PostOrder_Traversal(node->left);
	}
	if (node->right != NULL) {
		PostOrder_Traversal(node->right);
	}
	printf("%d\n", node->data);
}


void InOrder_Traversal(Node* node) {
	if (node->left != NULL) {
		InOrder_Traversal(node->left);
	}

	printf("%d\n", node->data);

	if (node->right != NULL) {
		InOrder_Traversal(node->right);
	}
}

int main() {
	Node* root = Create_Tree();

	printf("The root node value is %d\n", root->data);
	printf("Pre order traverse\n");
	PreOrder_Traversal(root);

	printf("Post order traverse\n");
	PostOrder_Traversal(root);

	printf("In order traverse\n");
	InOrder_Traversal(root);

	return 0;
}
