#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char findtext[1], text[150];
    int check;
    scanf("%s %[^\n]", findtext, text);
    for (int i = 0; i <= strlen(text); i++)
    {
        if(tolower(text[i]) == tolower(findtext[0])
        {
            check += 1;
        }
    }
    printf("%d", check);
}
