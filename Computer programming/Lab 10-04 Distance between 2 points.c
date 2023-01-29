#include <stdio.h>
#include <math.h>

typedef struct
{
  double x;
  double y;
} Point;

double calculateDistance(Point value1, Point value2)
{
  return sqrt(pow(value1.x - value2.x, 2) + pow(value1.y - value2.y, 2));
}

int main()
{
  Point value1, value2;
  scanf("%lf %lf %lf %lf", &value1.x, &value1.y, &value2.x, &value2.y);
  printf("Distance between two points (x1,y1) and (x2,y2) : %.2lf", calculateDistance(value1, value2));
  return 0;
}
