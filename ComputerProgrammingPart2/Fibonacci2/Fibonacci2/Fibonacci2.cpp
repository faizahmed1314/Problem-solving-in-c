#include<stdio.h>
#include <string.h>

int f_calls = 0;
int f_array[50];

int fib(int n) {
	f_calls++;

	if (f_array[n] != 0) {
		return f_array[n];
	}

	if (n == 1 || n == 2) {
		return 1;
	}

	f_array[n] = fib(n - 1) + fib(n - 2);

	return f_array[n];
	
}

int main() {
	int n;
	char s[3];
	f_array[1] = 1;
	f_array[2] = 1;
	scanf_s("%d", &n);

	if (n == 1) {
		strcpy_s(s, "st");
	}
	else if (n == 2) {
		strcpy_s(s, "nd");
	}
	else if (n == 3) {
		strcpy_s(s, "rd");
	}
	else {
		strcpy_s(s, "th");
	}

	printf("The %d%s Fibonacci number is %d\n", n, s, fib(n));
	printf("Number of function calls: %d\n", f_calls);

	for (int i = 1; i <= 12; i++) {
		printf("%d ", f_array[i]);
	}

	return 0;
}