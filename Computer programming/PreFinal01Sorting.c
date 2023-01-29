#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  char name[10][200];
  char storage[200];

  for (int i = 0; i < 10; i++)
  {
    // Loop รับ Input 10 ชื่อ เข้ามา
    scanf(" %[^\n]", name[i]);
  }

  // sort
  for (int i = 0; i < 10; i++)
  {
    for (int j = i + 1; j < 10; j++)
    {
      if (strcmp(name[j], name[i]) < 0)
      {
        strcpy(storage, name[j]);
        strcpy(name[j], name[i]);
        strcpy(name[i], storage);
      }
    }
  }

  // Print ชื่อที่ sort เเล้วทั้งหมด
  for (int i = 0; i < 10; i++)
  {
    printf("%s\n", name[i]);
  }

  return 0;
}
