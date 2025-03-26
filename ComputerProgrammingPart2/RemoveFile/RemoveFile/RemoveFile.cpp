#include<stdio.h>

int main() {
	int return_type;
	char file_name[] = "E:\\Faiz\\Subin shahriar\\Problem-solving-in-c\\ComputerProgrammingPart2\\CopyImage\\faiz_copy.png";


	return_type = remove(file_name);

	if (return_type != 0) {
		perror("File not removed\n");
		return 1;
	}

	printf("File removed successfully\n");

	return_type = remove(file_name);

	if (return_type != 0) {
		perror("File not removed\n");
		return 1;
	}

	printf("File removed successfully\n");
	return 0;
}