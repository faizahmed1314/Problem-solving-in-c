#include<stdio.h>
//#include "Recursion.h"

void recursion(int n) {
	if (n > 2) {
		return;
	}
	recursion(n + 1);
	printf("%d\n", n);
}


int main() {
	recursion(1);
	return 0;
}