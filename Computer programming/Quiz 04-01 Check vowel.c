#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    switch(a) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'e':
        case 'a':
        case 'i':
        case 'o':        
        case 'u':
            printf("The letter \'%c\' is a vowel.", a);
            break;
        default:
            printf("The letter \'%c\' is not a vowel.", a);
    }
 
}
