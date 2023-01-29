#include <stdio.h>
 
int main()
{
    int numberM, numberN;
    scanf("%d %d", &numberM, &numberN);
    if (numberM > numberN)
    {
        while (numberM >= numberN)
        {
            printf("%d ", numberM);
            numberM--;
        }
    }
    else {
        while (numberM <= numberN)
        {
            printf("%d ", numberM);
            numberM++;
        }
    }
    return 0;
}
