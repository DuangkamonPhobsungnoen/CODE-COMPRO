#include <stdio.h>
int main(){
    float number1, number2, number3;
    scanf("%f %f %f", &number1, &number2, &number3);
    printf("%.2f",(number1*number3)-((number1*number2*number3)/100));
    return 0;
}
