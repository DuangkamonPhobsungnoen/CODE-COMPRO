#include <stdio.h>
#include <string.h>
#include <ctype.h> //แปลงstr

int main()
{
    char text1[101], text2[101], str_text1[101], str_text2[101];
    scanf("%[^\n] %[^\n]", &text1, &text2);
    for (int i = 0; i <= strlen(text1); i++)
    {
        if (islower(text1[i]) != 0)
        {
            str_text1[i] = toupper(text1[i]);
        }
        else
        {
            str_text1[i] = tolower(text1[i]);
        }
    }
    for (int i = 0; i <= strlen(text2); i++)
    {
        if (islower(text2[i]) != 0)
        {
            str_text2[i] = toupper(text2[i]);
        }
        else
        {
            str_text2[i] = tolower(text2[i]);
        }
    }
    printf("*** Results ***\n");
    printf("%s\n%s\n", str_text1, str_text2);
    printf("***************\n");

    if (strcasecmp(text1, text2) == 0)
    {
        printf("Both strings are the same.");
    }
    else
    {
        printf("Both strings are not the same.");
    }
}
