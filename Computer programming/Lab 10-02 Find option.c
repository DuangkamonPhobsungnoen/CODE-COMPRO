#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  struct student_info
  {
    char Fname[60], Sname[60], sex[10], id[12];
    int age;
    float gpa;
  } input[20], value;
  char key[20], inpo[20];
  int i = 0, j = 0;
  for (i = 0; i < 20; i++)
  {
    scanf("%s %s %s %d %s %f", input[i].Fname, input[i].Sname, input[i].sex, &input[i].age, &input[i].id, &input[i].gpa);
  }
  scanf("%s", (inpo));
  for (i = 0; i < 20; i++)
  {
    key[i] = tolower(inpo[i]);
  }
  for (i = 0; i < 20; i++)
  {
    for (j = 0; j < 20 - 1 - i; j++)
    {
      if (strcmp(input[j].Sname, input[j + 1].Sname) > 0 && strcmp(key, "surname") == 0)
      {
        value = input[j];
        input[j] = input[j + 1];
        input[j + 1] = value;
      }
      else if (strcmp(input[j].Fname, input[j + 1].Fname) > 0 && strcmp(key, "name") == 0)
      {
        value = input[j];
        input[j] = input[j + 1];
        input[j + 1] = value;
      }
      else if (strcmp(input[j].id, input[j + 1].id) > 0 && strcmp(key, "id") == 0)
      {
        value = input[j];
        input[j] = input[j + 1];
        input[j + 1] = value;
      }
    }
  }
  for (i = 0; i < 20; i++)
  {
    if (strcmp(input[i].sex, "Female") == 0)
    {
      printf("Miss %c %s (%d) ID: %08s GPA %.2f\n", input[i].Fname[0], input[i].Sname, input[i].age, input[i].id, input[i].gpa);
    }
    else
    {
      printf("Mr %c %s (%d) ID: %08s GPA %.2f\n", input[i].Fname[0], input[i].Sname, input[i].age, input[i].id, input[i].gpa);
    }
  }
}
