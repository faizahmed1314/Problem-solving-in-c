#include<stdio.h>
int main()
{
	FILE* fp;
	char fileName[] = "my_file.txt";
	errno_t err;

	err = fopen_s(&fp, fileName, "w");
	if (err != 0) {
		printf("Failed to open file\n");
		return 1;
	}

	fprintf(fp, "This is a file created by my program.\n");
	fprintf(fp, "I am so happy.\n");
	fclose(fp);

	return 0;
}