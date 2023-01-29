#include <stdio.h>

int main()
{
    char name1[50], name2[50], name3[50], name4[50], name5[50], name6[50], name7[50], name8[50], name9[50];
    scanf("%s %s %s %s %s %s %s %s %s", name1, name2, name3, name4, name5, name6, name7, name8, name9);
    printf("%s\t%s\t%s\n", name1, name2, name3);
    printf("%s\t%s\t%s\n", name4, name5, name6);
    printf("%s\t%s\t%s", name7, name8, name9);
    return 0;
}
