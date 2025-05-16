#include <stdio.h>
int main(){
//print even numbers between 1 and 100

    int a;
    for(a = 1; a <=50; a++)
        if (a % 2 == 0){
        printf("%d\n", a);
    }

    return 0;
}