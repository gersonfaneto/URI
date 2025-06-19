#include <math.h>
#include <stdio.h>

int main(void)
{
  float x1, y1, x2, y2;
  float distance;

  scanf("%f %f", &x1, &y1);
  scanf("%f %f", &x2, &y2);

  distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  printf("%.4f\n", distance);

  return 0;
}
