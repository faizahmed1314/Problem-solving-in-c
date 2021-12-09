#include<stdio.h>

int main(){
    int n = 5, i = 0;

    for(; ; ) {
        i= i + 1;
        printf("%d X %d = %d \n", n, i, n*i);
        if(i >= 10) {
            break;
        }
    }

    return 0;
}
