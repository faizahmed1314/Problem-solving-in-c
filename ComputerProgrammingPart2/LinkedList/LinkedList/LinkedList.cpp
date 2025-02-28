#include<stdio.h>
#include <corecrt_malloc.h>

int main() {
	int* a;
	a = (int*)malloc(sizeof(int));

	printf("The memory address of a is %p\n", a);

	scanf_s("%d", a);
	printf("The value of a is %d", *a);
	return 0;

}