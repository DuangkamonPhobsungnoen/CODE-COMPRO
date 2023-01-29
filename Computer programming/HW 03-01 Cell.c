#include <stdio.h>

int main()
{
    char text[4];
    scanf("%s", text);
    printf("%s\n", "*****");
    printf("%s\n", "*-*-*");
    printf("*%s*\n", text);
    printf("%s\n", "*-*-*");
    printf("%s", "*****");
}
