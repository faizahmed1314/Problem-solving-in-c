#include<stdio.h>


int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int n = 5;
	int x = 3;
	int result = -1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			result = i;
			break;
		}
	}
	if (result == -1)
	{
		printf("Element is not present in the array");
	}
	else
	{
		printf("Element %d is present at index %d", x, result);
	}
	return 0;
}