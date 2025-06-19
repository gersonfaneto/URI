#include <stdio.h>

#define WEIGHT_A 2
#define WEIGHT_B 3
#define WEIGHT_C 5

int main(void)
{
  double a, b, c;
  double average;

  scanf("%lf%*c", &a);
  scanf("%lf%*c", &b);
  scanf("%lf%*c", &c);

  average += (a * WEIGHT_A);
  average += (b * WEIGHT_B);
  average += (c * WEIGHT_C);

  average /= (WEIGHT_A + WEIGHT_B + WEIGHT_C);

  printf("MEDIA = %.1lf\n", average);

  return 0;
}
