#include<stdio.h>
//#include "Recursion.h"

void recursion(int n) {
	if (n > 5) {
		return;
	}
	printf("%d\n", n);
	recursion(n + 1);
	printf("%d\n", n);
}


int main() {
	recursion(1);
	return 0;
}