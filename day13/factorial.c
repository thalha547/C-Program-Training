#include<stdio.h>
int main(){

    int i;

    long f = 1;

    for(i = 1; i <= 5; i ++){
        f = f * i;
        printf("%ld\n", f);
    }


    return 0;
}