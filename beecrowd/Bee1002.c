#include<stdio.h>

int main(){
    const double n=3.14159;
    double R, A;

    scanf("%lf", &R);

    A=n*R*R;

    printf("A=%0.4lf", A);
    printf("\n");
    return 0;

}
