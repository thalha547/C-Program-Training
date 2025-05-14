#include <stdio.h>

int main(){

    // SWITCH 

    int day = 3;

    switch(day){
        case 1:
        printf("monday");
        break;

        case 2:
        printf("tuesday");
        break;

        case 3:
        printf("weednesday");
        break;

        case 4:
        printf("thursday");
        break;

        case 5:
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;

        case 7:
        printf("sunday");
        break;

        default:
        printf("no other day");
    }
    
    return 0;

}