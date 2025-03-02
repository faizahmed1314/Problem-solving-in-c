#include<stdio.h>

int main() {

	// Print Ascii character
	//for (int i = 33; i <= 126; i++) {
	//	printf("ASCII code for %c is %d\n", i, i);
	//}

	// Print capital latter
	//char small_latter;
	//char capital_latter;
	//printf("Enter a small letter : \n");
	//small_latter = getchar();
	//capital_latter = small_latter - 32;
	//printf("The capital letter is %c\n", capital_latter);

	//print memory address
	//int a = 10;
	//int b = 20;
	//char c = 'A';
	//char d = 'B';

	//printf("The value of a is %d\n", a);
	//printf("The memory address of a is %p\n", &a);

	//printf("The value of b is %d\n", b);
	//printf("The memory address of b is %p\n", &b);

	//printf("The value of c is %c\n", c);
	//printf("The memory address of c is %p\n", &c);

	//printf("The value of d is %c\n", d);
	//printf("The memory address of d is %p\n", &d);

	//print memory address of an array

	//int arr[5] = { 10, 20, 30, 40, 50 };

	//printf("The memory address of arr is %p\n", arr);

	//for (int i = 0; i < 5; i++) {
	//	printf("The value of arr[%d] is %d\n", i, arr[i]);
	//	printf("The memory address of arr[%d] is %p\n", i, &arr[i]);
	//}

	// find the size of different type of variable

	//int num;
	//float ammount;
	//char name;
	//bool isTrue;

	//printf("%lu\n", sizeof(int));

	//printf("The size of int %d\n", sizeof(num));
	//printf("The size of float %d\n", sizeof(ammount));
	//printf("The size of char %d\n", sizeof(name));
	//printf("The size of bool %d\n", sizeof(isTrue));


	//pointer

	/*int a = 10;
	int* p;
	p = &a;
	printf("*p = %d\n", *p);
	printf("The value of p is %p\n", p);
	printf("The address of p is %p\n", p);
	printf("The address of a is %p\n\n\n", &a);


	double pi = 3.1416;*/
	// can't assign double to int pointer
	//int* ptr;

	/*double* ptr;

	ptr = &pi;

	printf("*ptr = %lf\n", *ptr);
	printf("The value of ptr is %p\n", ptr);

	*ptr = 5.7569;

	printf("After changing the value of *ptr\n");
	printf("pi = %lf\n", pi);
	printf("*ptr = %lf\n", *ptr);
	printf("The value of ptr is %p\n", ptr);*/


	// pointer assignment example

	//int x = 10, y;
	//int* p, *q;

	//p = &x;
	//q = &y;
	//y = *p;
	//*p = 15;
	//*q = 20;

	//printf("x = %d\n", x);
	//printf("y = %d\n", y);
	//printf("*p = %d\n", *p);
	//printf("*q = %d\n", *q);


	// Null pointer 

	//int* p = NULL;
	 int x = 10;
	 int* ptr = NULL;

	 printf("The value of x is %d\n", x);

	 // Below line will give you an error
	 //printf("The content of ptr is %d\n", *ptr);

	 // Assigning the address of x to ptr
	 // Now ptr is not a null pointer
	 // It is pointing to the address of x
	 // So, it will not give you an error
	 ptr = &x;
	 printf("The content of ptr is %d\n", *ptr);

	return 0;
}