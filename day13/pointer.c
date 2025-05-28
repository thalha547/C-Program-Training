#include <stdio.h>
int main(){

    int a = 5;
    int*p = &a;
    //printf("%p", &a);
    //printf("%d", *p);
    printf("%p", p + 1);

    return 0;
}