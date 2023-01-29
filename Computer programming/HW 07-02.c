#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

int main() {
    int degree, speed_c;
    double height, radian;
    scanf("%d %d", &degree, &speed_c);
    radian = (degree * PI) / 180;
    height = (pow(speed_c, 2) * pow(sin(radian), 2)) / 19.62;
    printf("theta (degree) : %d\n", degree);
    printf("u (m/s) : %d\n", speed_c);
    printf("h (m) : %.4lf", height);
}
