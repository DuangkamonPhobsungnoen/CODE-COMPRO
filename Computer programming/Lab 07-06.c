#include "stdio.h"
#include <math.h>

double standard(double x, double y) {
    double c;
    c = sqrt((pow(x, 2))+(pow(y, 2)));
    return c;
}

int main () {
    double x, y, c;
    scanf("%lf %lf", &x, &y);
    c = standard(x, y);
    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf", x, y, c);
}
