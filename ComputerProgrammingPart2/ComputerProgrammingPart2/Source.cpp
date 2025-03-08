#include<stdio.h>

int Right(int p) {
	return 2 * p + 1;
}

int Left(int p) {
	return 2 * p;
}

int Parent(int p) {
	return p / 2;
}

void Max_heapify(int heap[], int size, int parentIndex) {
	int l, r, temp, largest;
	l = Left(parentIndex);
	r = Right(parentIndex);

	//printf("left %d  ", heap[l]);
	//printf("parent %d  ", heap[parentIndex]);

	if (l < size && heap[l] > heap[parentIndex]) {

		largest = l;
	}
	else {
		largest = parentIndex;
	}

	if (r < size && heap[r] > heap[largest]) {
		largest = r;
	}

	if (largest != parentIndex) {
		temp = heap[parentIndex];
		heap[parentIndex] = heap[largest];
		heap[largest] = temp;
		Max_heapify(heap, size, largest);
	}
}

int Extract_Item(int heap[], int size) {
	int temp = heap[1];
	heap[1] = heap[size - 1];
	size--;
	Max_heapify(heap, size, 1);
	return temp;
}

int Insert_Priority_Queue(int heap[], int size, int value) {
	int i, p, temp;
	i = size;
	heap[i] = value;

	while (i > 1 && heap[i] > heap[Parent(i)]) {
		p = Parent(i);
		temp = heap[p];
		heap[p] = heap[i];
		heap[i] = temp;
		i = p;
	}
	return size + 1;
}


void build_max_heap(int heap[], int heap_size) {
	int i;
	for (i = heap_size / 2; i >= 1; i--) {
		Max_heapify(heap, heap_size, i);
	}
}

int main() {
	int heap[10] = { 0,19,7,12,3,5,17,10,1,2 };

	build_max_heap(heap, 10);

	for (int i = 0; i < 10; i++) {
		printf("%d\n", heap[i]);
	}

	int extracteditem = Extract_Item(heap, 10);

	printf("extracteditem %d\n", extracteditem);

	for (int i = 0; i < 9; i++) {
		printf("%d\n", heap[i]);
	}

	int newsize = Insert_Priority_Queue(heap, 9, 20);

	printf("newsize %d\n", newsize);
	
	for (int i = 0; i < 10; i++) {
		printf("%d\n", heap[i]);
	}
	return 0;
}
