#include <stdio.h>
 
void maxmin(double *a, double *b);
 
int main()
{
    double a;
    double b;
    scanf("%lf %lf", &a, &b);
    maxmin(&a, &b);
    printf("%.5lf\n%.5lf", a, b);
}

void maxmin(double *a, double *b)
{
  double var;
  if (*a > *b) {
    var = *a;
    *a = *b;
    *b = var;
  }
}
