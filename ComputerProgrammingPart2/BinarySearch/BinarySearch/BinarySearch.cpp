#include<stdio.h>

int binarySearch(int arr[], int n, int x) {
	int left, right, mid;

	left = 0;
	right = n - 1;

	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] == x) {
			return mid;
			break;
		}
		if (arr[mid] < x) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return -1;
}
int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", n);
	printf("size of arr: %d\n", sizeof(arr));
	printf("size of arr[0]: %d\n", sizeof(arr[0]));

	int x = 5;

	int result = binarySearch(arr, n, x);

	if (result == -1) {
		printf("Element is not present in array\n");
	}
	else {
		printf("Element is present at index %d\n", result);
	}
	return 0;

}