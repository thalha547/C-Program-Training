#include <stdio.h>
int main(){

    int arr[] = {50, 39, 38, 85, 38};
    int*p = arr;

    for(int i = 0; i <= 4; i ++){

        printf("%d\n", *p+i);
    }

    return 0;
}