#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  char name[20][60];
  char storage[60];

  for (int i = 0; i < 20; i++)
  {
    // Loop รับ Input 20 ชื่อ เข้ามา
    scanf(" %[^\n]", name[i]);
    for (int j = 0; j < strlen(name[i]); j++)

      // ถ้าเป็นตัวเเรก ให้เป็นตัวพิมพ์ใหญ่
      if (j == 0)
      {
        name[i][j] = toupper(name[i][j]);
      }
      // ถ้าเจอ space  ให้ตัวถัดไปเป็นตัวพิมพ์ใหญ่
      else if (name[i][j] == ' ')
      {
        j++;
        name[i][j] = toupper(name[i][j]);
      }
      // ตัวอื่นให้เป็น ตัวพิมพ์เล็ก
      else
      {
        name[i][j] = tolower(name[i][j]);
      }
  }

  // sort
  for (int i = 0; i < 20; i++)
  {
    for (int j = i + 1; j < 20; j++)
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
  for (int i = 0; i < 20; i++)
  {
    printf("%s\n", name[i]);
  }

  return 0;
}
