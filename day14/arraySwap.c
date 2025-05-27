#include<stdio.h>
int main(){

    int arr[] = {34, 54, 436, 634, 35};
    
    int *start = arr;
    int  *end = arr + 4;
    int temp; 
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < (n/2); i++){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}