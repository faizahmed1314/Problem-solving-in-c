#include <stdio.h>

void recursion(int n) {
	if (n > 2) {
		return;
	}
	recursion(n + 1);
	printf("%d\n", n);
}
