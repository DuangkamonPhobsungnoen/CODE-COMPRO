#include "stdio.h"
#include <math.h>

double permeter(double height, double base) {
    double opposite;
    opposite = sqrt((pow(height, 2))+(pow(base, 2)));
    return  height + base + opposite;
}

double area(double height, double base) {
    double sum;
    sum = 0.5 * height * base;
    return sum;
}
int main () {
    double height, base, permeter1, area1;
    scanf("%lf %lf", &height, &base);
    permeter1 = permeter(height, base);
    area1 = area(height, base);
    printf("Perimeter: %.2lf\n", permeter1);
    printf("Area: %.2lf", area1);
}
