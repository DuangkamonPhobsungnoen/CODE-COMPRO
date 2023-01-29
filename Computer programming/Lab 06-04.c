#include<stdio.h>
#include <string.h>
 
int main() {
    char text[100];
    scanf("%[^\n]", text);
    int i;
    for (i = strlen(text)-1; i >= 0 ; i--)
    {
        printf("%c", text[i]);
    }
    return 0;
}
