#include<stdio.h>

int main(){

    int n1,n2,value;
    char sign;

    printf("Please enter first number: ");
    scanf("%d", &n1);

    printf("Please enter another number :");
    scanf("%d", &n2);
    //Sumation
    value = n1 + n2;
    sign = '+';

    printf("%d %c %d = %d\n", n1, sign, n2, value);
    //Substruction
    value = n1 - n2;
    sign = '-';

    printf("%d %c %d = %d\n", n1,sign,n2,value);
    //Multiplicaiton
    value = n1 * n2;
    sign = '*';

    printf("%d %c %d = %d \n", n1, sign,n2,value);
    /*Division
    This is multiple line comment*/
    value = n1 / n2;
    sign = '/';

    printf("%d %c %d = %d \n", n1,sign,n2,value);

    return 0;

}
