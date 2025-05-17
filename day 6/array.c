#include <stdio.h>
int main(){

    int arr[]= {1,3,6,8,36};
    for(int i = 0; i<=sizeof(arr); i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}