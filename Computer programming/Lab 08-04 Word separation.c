#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char text[150];
    int check = 1;
    scanf("%[^\n]", text);
    for (int i = 0; i < strlen(text); i++)
    {
        if(isspace(text[i]))
        {
            check += 1;
        }
    }
    printf("%d words \n----\n", check);
    char *value = strtok(text, " ");
    while (value != NULL)
    {
        for (int i = 0; i < strlen(value); i++)
    {
            printf("%c", tolower(value[i]));
    }
        printf(" : %d\n", strlen(value));
        value = strtok(NULL, " ");
    }
    
}

//http://cholwich.blogspot.com/2012/06/c-strtok.html แบ่งข้อความด้วย strtok

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char text[150], value;
    int check = 1, check1 = 0;
    scanf("%[^\n]", text);
    for (int i = 0; i < strlen(text); i++)
    {
        if(isspace(text[i]))
        {
            check += 1;
        }
    }

    printf("%d words \n----\n", check);
    for (int i = 0; i <= strlen(text); i++)
    {
        if (isspace(text[i]) == 0 && i != strlen(text)){
            printf("%c", tolower(text[i]));
            check1 += 1;
        }
        if (isspace(text[i]) != 0 || i == strlen(text)){
            printf(" : %d\n", check1);
            check1 = 0;
        }
    }
}
