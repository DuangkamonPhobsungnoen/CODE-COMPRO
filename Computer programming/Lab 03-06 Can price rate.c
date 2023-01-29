#include <stdio.h>
#include <math.h>
int main(){
    float number1, number2, number3;
    scanf("%f %f %f", &number1, &number2, &number3);
    printf("Volume : %.2fml\n", (number3*3.14159265359*(pow((number2/2),2))));
    printf("Baht/ml : %.4f", number1/(number3*3.14159265359*(pow((number2/2),2))));
    return 0;
}
