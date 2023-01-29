#include <stdio.h>
 
 void swap(double *a, double *b);

int main()
{
  double valueA;
  double valueB;
  double valueC;
  scanf("%lf %lf %lf", &valueA, &valueB, &valueC);
  swap(&valueA, &valueB);
  swap(&valueA, &valueC);
  printf("%.2lf %.2lf %.2lf", valueA, valueB, valueC);
}

void swap(double *a, double *b)
{
  double swap = *a;
  *a = *b;  
  *b = swap; 
}
