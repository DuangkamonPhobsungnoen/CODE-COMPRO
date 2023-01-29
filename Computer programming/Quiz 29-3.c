#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char text[150];
    int check;
    scanf("%[^\n]", text);
    for (int i = 0; i <= strlen(text); i++)
    {
        if(tolower(text[i]) == 'a' || tolower(text[i]) == 'e' || tolower(text[i]) == 'i' || tolower(text[i]) == 'o' || tolower(text[i]) == 'u')
        {
            check += 1;
        }
    }
    printf("%d", check);
}

// #include<stdio.h>
// int main(void)
// {
//     int a;
//     int *p;
//     int **q;
//     a = 14;
    
//     p = &a;
//     q = &p;
//     printf("%d\n", a);
//     printf("%d\n", p);
//     printf("%d\n", q);
//     printf("%d\n", &a);
//     printf("%d\n", &p);
//     printf("%d\n", &q);
//     printf("%d\n", *p);
//     printf("%d\n", *q);
//     printf("%d\n", **q);
//     return 0;
// }
