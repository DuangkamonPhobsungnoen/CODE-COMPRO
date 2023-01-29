#include <stdio.h>
#include <string.h>
int main()
{
    char text1[200];
    char text2[200];
    scanf("%[^\n] %[^\n]", text1, text2);
    if(strlen(text1) > strlen(text2))
    {
        printf("%s", text1);
    }
    else if (strlen(text1) < strlen(text2))
    {
        printf("%s", text2);
    }
    else {
        printf("\\7");
    }
    
}
