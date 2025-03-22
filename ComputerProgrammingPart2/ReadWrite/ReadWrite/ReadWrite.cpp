#include<stdio.h>

int main() {
    FILE* fpIn;
    FILE* fpOut;
    char file_in[] = "E:\\Faiz\\Subin shahriar\\Problem-solving-in-c\\ComputerProgrammingPart2\\ReadWrite\\in.txt";
    char file_out[] = "out.txt";
    errno_t err;
    errno_t err2;
    int num1, num2, num3;

    err = fopen_s(&fpIn, file_in, "r");

    if (err != 0) {
        printf("Failed to open the file read");
        return 1;
    }

    err2 = fopen_s(&fpOut, file_out, "w");
    if (err2 != 0) {
        printf("Failed to open the file write");
        return 1;
    }

    //if (fscanf_s(fpIn, "%d", &num1) != 1) {
    //    printf("Failed to read num1 from file");
    //    fclose(fpIn);
    //    fclose(fpOut);
    //    return 1;
    //}

    //if (fscanf_s(fpIn, "%d", &num2) != 1) {
    //    printf("Failed to read num2 from file");
    //    fclose(fpIn);
    //    fclose(fpOut);
    //    return 1;
    //}
    
    // get the line as a single input
    char line[80];
    fgets(line, 80, fpIn);

    printf("Line: %s\n", line);
    if (sscanf_s(line, "%d %d\n", &num1, &num2) != 2) {
        printf("Failed to parse numbers from line");
        fclose(fpIn);
        fclose(fpOut);
        return 1;
    }

    num3 = num1 + num2;

    printf("%d + %d = %d\n", num1, num2, num3);
    fprintf(fpOut, "%d\n", num3);
    fclose(fpIn);
    fclose(fpOut);

    return 0;
}