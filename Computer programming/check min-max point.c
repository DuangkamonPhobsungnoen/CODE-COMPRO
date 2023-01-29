#include <stdio.h> //มากไปน้อย

int main()
{
  double valueA;
  double valueB;
  double valueC;
  double *ptrA = &valueA;
  double *ptrB = &valueB;
  double *ptrC = &valueC;
  scanf("%lf %lf %lf", &valueA, &valueB, &valueC);

  double a = *ptrA; // สร้างตัวแปรชั่วคราวเพื่อเก็บค่า
  double b = *ptrB;
  double c = *ptrC;

  if (a >= b && a >= c)
  {
    if (b > c)
    {
      printf("%.2lf %.2lf %.2lf", a, b, c);
    }
    else
    {
      printf("%.2lf %.2lf %.2lf", a, c, b);
    }
  }

  else if (b >= a && b >= c)
  {
    if (a > c)
    {
      printf("%.2lf %.2lf %.2lf", b, a, c);
    }
    else
    {
      printf("%.2lf %.2lf %.2lf", b, c, a);
    }
  }

  else if (c >= a && c >= b)
  {
    if (a > b)
    {
      printf("%.2lf %.2lf %.2lf", c, a, b);
    }
    else
    {
      printf("%.2lf %.2lf %.2lf", c, b, a);
    }
  }
  
  else
  {
    printf("%.2lf %.2lf %.2lf", a, b, c);
  }
  return 0;
}
