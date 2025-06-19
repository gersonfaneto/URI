#include <stdio.h>

#define WEIGHT_A 3.5
#define WEIGHT_B 7.5

int main(void)
{
  double a, b;
  double average;

  scanf("%lf%*c", &a);
  scanf("%lf%*c", &b);

  average = ((a * WEIGHT_A) + (b * WEIGHT_B)) / (WEIGHT_A + WEIGHT_B);

  printf("MEDIA = %.5f\n", average);

  return 0;
}
