#include <stdio.h>

int main()
{
    char fname1[50], sname1[50], fname2[50], sname2[50], fname3[50], sname3[50];
    scanf("%s %s %s %s %s %s", fname1, sname1, fname2, sname2, fname3, sname3);
    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s %s\n", fname2, sname2);
    printf("Person 3: %s %s", fname3, sname3);
    return 0;
}
//เมื่อเราเว้นวรรคมันเป็นการแยกตัวแปร, เว้นวรรคคือการรับตัวแปรใหม่ [^\n]รับเว้นวรรคได้
