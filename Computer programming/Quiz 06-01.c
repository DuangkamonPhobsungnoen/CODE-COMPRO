#include <stdio.h>

int number_des(int number[], int pos)
{
   int value;
   for (int j = 0; j < pos; j++)
   {
      for (int n = j + 1; n < pos; n++)
      {
         if (number[j] < number[n])
         {
            value = number[j];
            number[j] = number[n];
            number[n] = value;
         }
      }
   }
   for (int i = 0; i < pos; i++) printf("%d ", number[i]);
}
int main()
{
   int pos, number[30];
   scanf("%d", &pos);
   for (int i = 0; i < pos; i++)
      scanf("%d", &number[i]);
   number_des(number, pos);
}
