#include <stdio.h>
 
int main()
{
  double valueA;
  double valueB;
  double valueC;
  double *ptrA = &valueA;
  double *ptrB = &valueB;
  double *ptrC = &valueC;
  scanf("%lf %lf %lf", &valueA, &valueB, &valueC);

  // Swap
  double swap = *ptrA; // สร้างตัวแปรชั่วคราวเพื่อเก็บค่า
  *ptrA = *ptrC; // แก้ไขค่าของ ptrA โดยใช้ Pointer ให้เป็นค่าของ ptrC
  *ptrC = *ptrB; // แก้ไขค่าของ ptrC โดยใช้ Pointer ให้เป็นค่าของ ptrB
  *ptrB = swap; // แก้ไขค่าของ ptrB โดยใช้ Pointer ให้เป็นค่าของ swap

  printf("%.2lf %.2lf %.2lf", valueA, valueB, valueC);
  return 0;
}

// #include <stdio.h>
 
// void swap(double *a, double *b);
 
// int main()
// {
//     double a;
//     double b;
//     double c;
//     scanf("%lf %lf %lf", &a, &b, &c);
//     swap(&c, &a);
//     swap(&b, &c);
//     printf("%.2lf %.2lf %.2lf", a, b, c);
// }
 
// void swap(double *a, double *b)
// {
//     double tmp = *a;
//     *a = *b;
//     *b = tmp;
// }
