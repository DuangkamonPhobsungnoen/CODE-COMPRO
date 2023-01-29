#include <stdio.h>

int main()
{
    float high, weight;
    scanf("%f %f", &high, &weight);
    printf("%f",weight/((high/100)*(high/100)));
}
