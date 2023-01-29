#include <stdio.h>

int main()
{
    int number, i, j;
    scanf("%d", &number);
    int right = number;
    for (i = 1; i <= number; i++)
    {
        for (j = 1; j <= number; j++)
        {
            if (j==i || j==right)
            {
                printf("-");
            }
            else{
                printf("#");
            }
        }
        right--;
        printf("\n");
    }
    return 0;
}
