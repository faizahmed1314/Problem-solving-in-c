#include<stdio.h>

#define STACK_MAX 100

typedef struct {
	int top;
	int data[STACK_MAX];
} Stack;

int count = 0;

void Push(Stack* s, int item) {

	if (s->top > STACK_MAX) {
		printf("Stack is full\n");
	}
	else {
		s->data[s->top] = item;
		s->top = s->top + 1;
		count++;
	}

}

int Pop(Stack* s) {
	int item;

	if (s->top == 0) {
		printf("Stack is empty\n");
	}
	else {
		s->top = s->top - 1;
		item = s->data[s->top];
		count--;
	}
	return item;
}

int main() {
	Stack my_stack;
	int item;

	my_stack.top = 0;
	Push(&my_stack, 1);
	Push(&my_stack, 2);
	Push(&my_stack, 3);

	for (int i = 0; i < count; i++) {
		printf("%d\n", my_stack.data[i]);
	}

	item = Pop(&my_stack);
	printf("%d\n", item);

	item = Pop(&my_stack);
	printf("%d\n", item);

	return 0;
}