#include<stdio.h>

int main() {

	// Print Ascii character
	//for (int i = 33; i <= 126; i++) {
	//	printf("ASCII code for %c is %d\n", i, i);
	//}

	// Print capital latter
	char small_latter;
	char capital_latter;
	printf("Enter a small letter : \n");
	small_latter = getchar();
	capital_latter = small_latter - 32;
	printf("The capital letter is %c\n", capital_latter);
	return 0;
}