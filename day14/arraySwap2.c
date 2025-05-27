#include<stdio.h>
int main(){

    int arr[] = {43, 53, 56, 24, 75};
    int *start = arr;
    int *end = arr + 4;
    int temp;

    while(start<end){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    for(int i = 0; i < 5; i++){
        printf("%d\n", arr[i]);
    } 

    return 0;
}