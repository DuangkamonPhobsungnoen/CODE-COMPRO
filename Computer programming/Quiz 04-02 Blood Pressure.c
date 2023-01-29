#include <stdio.h>

int main()
{
  float a, b;

  scanf("%f %f", &a, &b);

  (a <= 140 && b <= 90)
      ? printf("Normal")
      : printf("Hypertension");

  return 0;
}
