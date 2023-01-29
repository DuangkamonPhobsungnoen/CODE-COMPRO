#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    printf("%.2f", sqrt(pow(num1,2) + pow(num2,2)));
}
