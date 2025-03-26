#include<stdio.h>
#include<string.h>

int f_calls = 0;

int fibonacci(int n) {
	f_calls++;

	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int n = 0;
	char s[3];

	scanf_s("%d", &n);

	if (n < 0) {
		printf("Invalid input\n");
		return 0;
	}

	else
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


	printf("The %d%s Fibonacci number is %d\n", n, s, fibonacci(n));

	printf("Number of function calls: %d\n", f_calls);
	return 0;
}