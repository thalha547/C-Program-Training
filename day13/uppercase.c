#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

char str[50] = "";
int i = 0;

printf("Enter a string: ");
fgets(str, sizeof(str), stdin);

while(str[i] != '\0'){
    str[i] = toupper(str[i]);
    i++;
}
printf("%s", str);

return 0;
}