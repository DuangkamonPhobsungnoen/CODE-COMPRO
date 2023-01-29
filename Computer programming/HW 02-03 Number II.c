#include <stdio.h>

int main()
{
    int text1[80];
    scanf("%s", text1);
    printf("%1.1s%79s", text1, "");
    printf("%3.2s%77s", text1, "");
    printf("%5.3s%75s", text1, "");
    printf("%7.4s%73s", text1, "");
    printf("%9.5s%71s", text1, "");
}
