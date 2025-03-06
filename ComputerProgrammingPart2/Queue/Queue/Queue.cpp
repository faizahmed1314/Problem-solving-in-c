#include<stdio.h>

#define qsize 5

typedef struct {
	int data[qsize + 1];
	int head, tail;
} Queue;

void Enqueue(Queue* q, int item) {

	if ((q->tail + 1) % (qsize + 1) == q->head) {
		printf("Q is full");
		return;
	}
	q->data[q->tail] = item;
	q->tail = (q->tail + 1) % (qsize + 1);
}

int Dequeue(Queue* q) {
	if (q->head == q->tail) {
		printf("Q is empty");
		return -1;
	}

	int item = q->data[q->head];
	q->head = (q->head + 1) % (qsize + 1);
	return item;
}


int main() {
	Queue my_queue;

	my_queue.head = 0;
	my_queue.tail = 0;

	Enqueue(&my_queue, 1);
	printf("The tail is %d\n", my_queue.tail);

	Enqueue(&my_queue, 5);
	printf("The tail is %d\n", my_queue.tail);

	int	item;

	printf("The current head is %d\n", my_queue.head);

	item = Dequeue(&my_queue);
	printf("The deleted item is %d and the current head is %d\n", item, my_queue.head);


	item = Dequeue(&my_queue);
	printf("The deleted item is %d and the current head is %d\n", item, my_queue.head);

	item = Dequeue(&my_queue);
	printf("The deleted item is %d and the current head is %d\n", item, my_queue.head);

	return 0;
}