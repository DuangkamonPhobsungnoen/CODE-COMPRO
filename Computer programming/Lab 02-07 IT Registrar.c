#include <stdio.h>

int main()
{   
    char name[31], surname[31], code[9];
    int day, month, year;
    float grade;
    scanf("%s %s %s", name, surname, code);
    scanf("%d/%d/%d", &day, &month, &year);
    scanf("%f", &grade);
    printf("Fullname: %s %s\n", name, surname);
    printf("ID: %s\n", code);
    printf("DOB: %02d-%02d-%d\n", day, month, year);
    printf("GPA: %.2f", grade);
    return 0;
}
