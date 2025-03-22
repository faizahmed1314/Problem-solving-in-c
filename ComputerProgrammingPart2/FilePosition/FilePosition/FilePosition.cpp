#include<stdio.h>
#include <cstdlib>

int main() {
	FILE* fp;
	char fileName[] = "E:\\Faiz\\Subin shahriar\\Problem-solving-in-c\\ComputerProgrammingPart2\\file\\file\\my_file.txt";
	errno_t err = fopen_s(&fp, fileName, "r");

	if (err != 0) {
		perror("File opening failed");
		return EXIT_FAILURE;
	}

	int ch = fgetc(fp);
	printf("%c\n", char(ch));

	ch = fgetc(fp);
	printf("%c\n", char(ch));

	fseek(fp, 0, SEEK_SET);
	ch = fgetc(fp);
	printf("%c\n", char(ch));

	fclose(fp);
	return 0;
}