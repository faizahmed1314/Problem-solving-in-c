#include<stdio.h>


int left_index(int parentIndex) {
	return 2 * parentIndex;
}
int right_index(int parentIndex) {
	return 2 * parentIndex + 1;
}
void max_heapify(int heap[], int heap_size, int parentIndex) {
	int left, right, temp, largest;

	left = left_index(parentIndex);
	right = right_index(parentIndex);

	if (left <= heap_size && heap[left] > heap[parentIndex]) {
		largest = left;
	}
	else {
		largest = parentIndex;
	}

	if (right <= heap_size && heap[right] > heap[largest]) {
		largest = right;
	}

	if (largest != parentIndex) {
		temp = heap[parentIndex];
		heap[parentIndex] = heap[largest];
		heap[largest] = temp;
		max_heapify(heap, heap_size, largest);
	}
}

void build_max_heap(int heap[], int heap_size) {
	int i;
	for (i = heap_size / 2; i >= 1; i--) {
		max_heapify(heap, heap_size, i);
	}
}

int main() {
	int heap[10] = { 0,19,7,12,3,5,17,10,1,2 };

	build_max_heap(heap, 10);

	for (int i = 0; i < 10; i++) {
		printf("%d\n", heap[i]);
	}
	return 0;
}