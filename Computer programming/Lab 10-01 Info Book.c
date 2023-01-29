#include <stdio.h>
#include <string.h> 
int main()
{
    int i;
    struct student_info
    {
        char name[60], surname[60], sex[10];
        int age;
        char id[12];
        float gpa;
    } p;
    scanf("%s %s %s %d %s %f", p.name, p.surname, p.sex, &p.age, p.id, &p.gpa);
    if (strcmp(p.sex, "Male") == 0){
        printf("Mr %.1s %s (%d) ID: %s GPA %.2f", p.name, p.surname,  p.age, p.id, p.gpa);
    }
    if (strcmp(p.sex, "Female") == 0){
        printf("Miss %.1s %s (%d) ID: %s GPA %.2f", p.name, p.surname,  p.age, p.id, p.gpa);
    }
}
