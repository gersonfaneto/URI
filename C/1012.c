#include <stdio.h>

#define PI 3.14159

int main(void)
{
  double a, b, c;
  double triangle, circle, trapezium, square, rectangle;

  scanf("%lf%lf%lf", &a, &b, &c);

  triangle = (a * c) / 2.f;
  trapezium = ((a + b) * c) / 2.f;
  circle = PI * (c * c);
  square = b * b;
  rectangle = a * b;

  printf("TRIANGULO: %.3f\n", triangle);
  printf("CIRCULO: %.3f\n", circle);
  printf("TRAPEZIO: %.3f\n", trapezium);
  printf("QUADRADO: %.3f\n", square);
  printf("RETANGULO: %.3f\n", rectangle);

  return 0;
}
