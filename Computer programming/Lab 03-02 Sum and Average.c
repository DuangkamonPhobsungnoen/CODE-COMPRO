#include <stdio.h>

int main()
{
    float num1, num2, num3, num4;
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    printf("Summation is %.2f\n", num1 + num2 + num3 + num4);
    printf("Average is %.3f\n", (num1 + num2 + num3 + num4) / 4);
}
