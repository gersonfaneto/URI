#include <stdio.h>

#define MAX_INPUT 3

#define __array_lenght(array) ((sizeof(array)) / (sizeof(array[0])))

int main(void)
{
  int xs[3], ys[3], counter;

  counter = 0;

  while (counter++ != MAX_INPUT)
  {
    scanf("%d%*c", &xs[counter - 1]);
    ys[counter - 1] = xs[counter - 1];
  }

  for (int i = 0; i < __array_lenght(ys) - 1; ++i)
  {
    for (int j = 0; j < __array_lenght(ys) - i - 1; ++j)
    {
      if (ys[j] > ys[j + 1])
      {
        ys[j] ^= ys[j + 1];
        ys[j + 1] ^= ys[j];
        ys[j] ^= ys[j + 1];
      }
    }
  }

  for (int i = 0; i < __array_lenght(ys); ++i)
  {
    printf("%d\n", ys[i]);
  }

  printf("\n");

  for (int i = 0; i < __array_lenght(xs); ++i)
  {
    printf("%d\n", xs[i]);
  }

  return 0;
}
