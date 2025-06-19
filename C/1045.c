#include <stdio.h>

#define MAX_INPUT 3

#define __array_lenght(array) ((sizeof(array)) / (sizeof(array[0])))

typedef struct triangle_t triangle_t;

struct triangle_t
{
  double a;
  double b;
  double c;
};

int main(void)
{
  int counter;
  double xs[MAX_INPUT];
  triangle_t triangle;

  counter = 0;

  while (counter++ != MAX_INPUT)
  {
    scanf("%lf%*c", &xs[counter - 1]);
  }

  for (int i = 0; i < __array_lenght(xs) - 1; ++i)
  {
    for (int j = 0; j < __array_lenght(xs) - i - 1; ++j)
    {
      if (xs[j] > xs[j + 1])
      {
        double holder = xs[j];
        xs[j] = xs[j + 1];
        xs[j + 1] = holder;
      }
    }
  }

  triangle = (triangle_t){
    .a = xs[0],
    .b = xs[1],
    .c = xs[2],
  };

  if (triangle.a >= (triangle.b + triangle.c))
  {
    printf("NAO FORMA TRIANGULO");
    return 0;
  }

  if (triangle.a >= (triangle.b + triangle.c))
  {
    printf("NAO FORMA TRIANGULO\n");
  }
  else
  {
    if ((triangle.a * triangle.a) == ((triangle.b * triangle.b) + (triangle.c * triangle.c)))
    {
      printf("TRIANGULO RETANGULO\n");
    }
    else if ((triangle.a * triangle.a) > ((triangle.b * triangle.b) + (triangle.c * triangle.c)))
    {
      printf("TRIANGULO OBTUSANGULO\n");
    }
    else
    {
      printf("TRIANGULO ACUTANGULO\n");
    }

    if (triangle.a == triangle.b && triangle.b == triangle.c)
    {
      printf("TRIANGULO EQUILATERO\n");
    }
    else if (triangle.a == triangle.b && triangle.b != triangle.c ||
             triangle.a == triangle.c && triangle.c != triangle.b ||
             triangle.b == triangle.c && triangle.c != triangle.a)
    {
      printf("TRIANGULO ISOSCELES\n");
    }
  }

  return 0;
}
