#include<stdio.h>

int main() {

	FILE* fp1, * fp2;
	errno_t err1;
	errno_t err2;
	const char* inputFile = "E:\\Faiz\\Subin shahriar\\Problem-solving-in-c\\ComputerProgrammingPart2\\CopyImage\\faiz.png";
	const char* outputFile = "E:\\Faiz\\Subin shahriar\\Problem-solving-in-c\\ComputerProgrammingPart2\\CopyImage\\faiz_copy.png";
	char buffer[1024];
	size_t bytesRead;

	err1 = fopen_s(&fp1, inputFile, "rb");
	err2 = fopen_s(&fp2, outputFile, "wb");

	if (err1 != 0) {
		perror("File opening failed");
		return -1;
	}



	if (err2 != 0) {
		perror("File opening failed");
		fclose(fp1);
		return -1;
	}

	while ((bytesRead = fread(buffer, 1, sizeof(buffer), fp1)) > 0) {
		fwrite(buffer, 1, bytesRead, fp2);
	}

	fseek(fp1, 0, SEEK_END);

	printf("File size : %ld bytes\n", ftell(fp1));
	printf("File size : %ld kilobytes\n", ftell(fp1) / 1024);

	fclose(fp1);
	fclose(fp2); 

	return 0;
}