#include<stdio.h>

int main(){
    int m = 1;

    while(m <= 100) {
        printf("%d \n", m);
        m++;
        if(m > 10) {
            break;
        }
    }

    return 0;
}
