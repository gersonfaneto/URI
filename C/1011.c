#include <stdio.h>

#define PI 3.14159

int main(void)
{
  double radius, volume;

  scanf("%lf", &radius);

  volume = (4 / 3.f) * PI * (radius * radius * radius);

  printf("VOLUME = %.3f\n", volume);

  return 0;
}
