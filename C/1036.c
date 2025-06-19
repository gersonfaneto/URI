#include <math.h>
#include <stdio.h>

int main(void)
{
  double A, B, C;
  double delta, r1, r2;

  scanf("%lf %lf %lf", &A, &B, &C);

  delta = (pow(B, 2)) - (4 * A * C);

  if (delta < 0 || A == 0)
  {
    printf("Impossivel calcular\n");
  }
  else
  {
    r1 = (-B + sqrt(delta)) / (2 * A);
    r2 = (-B - sqrt(delta)) / (2 * A);

    printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);
  }

  return 0;
}
