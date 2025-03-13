#include<stdio.h>

int main() {
	int arr[] = { 10,5,2,9,4,3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int minIndex, temp;

	for (int i = 0; i < n - 1; i++) {
		minIndex = i;

		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}

		temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}