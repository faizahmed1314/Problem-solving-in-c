#include<stdio.h>
//#include "Recursion.h"

void recursion() {

	static int n = 1;
	if (n > 5) {
		return;
	}
	printf("%d\n", n);
	n = n + 1;
	recursion();
}


int main() {
	recursion();
	return 0;
}