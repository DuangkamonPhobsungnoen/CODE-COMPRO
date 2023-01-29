#include <stdio.h>

int main()
{
    int number, i, j;
    scanf("%d", &number);
    int left = number-1;
    int right = number+1;
    for (i = 1; i <= number; i++)
    {
        for (j = 1; j <= number + (number - 1); j++)
        {
            if (j <= left || j >= right) 
            {
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
        left--;
        right++;
    }
    return 0;
}
