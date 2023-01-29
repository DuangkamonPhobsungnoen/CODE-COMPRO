#include <stdio.h>
#include <string.h>
int main()
{
    char text[150];
    scanf("%[^\n]", text);
    for (int i = 0; i < strlen(text); i++)
    {
        if(text[i] != ' ')
        {
            printf("%c", text[i]);
        }
    }
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main()
// {
//     char text[150];
//     scanf("%[^\n]", text);
//     for (int i = 0; i < strlen(text); i++)
//     {
//         if(isspace(text[i]) == 0)
//         {
//             printf("%c", text[i]);
//         }
//     }
// }
