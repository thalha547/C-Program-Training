#include <stdio.h>
#include <ctype.h>
int main(){

    char str[50] = "";
    int vowels = 0;
    int consonants = 0;
    int i = 0;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0'){
        char ch = tolower(str[i]);

        if(ch >= 'a' && ch <= 'z'){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonants);

    return 0;
}