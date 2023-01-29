#include <stdio.h>

int main(){
    double number1, number2;
    scanf("%lf %lf", &number1, &number2);
    printf("Perimeter of rectangle = %.4lf units", (number1+number2)*2);
    return 0;
}
