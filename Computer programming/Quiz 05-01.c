#include <stdio.h>
int main () 
{
    int i=0, num, sum=0;
    scanf("%d", &num);
    while (i<num)
    {
        i++;
        sum += i;
    }
    printf("%d ", sum);
    return 0;
}
