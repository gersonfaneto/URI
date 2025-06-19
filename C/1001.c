#include <stdio.h>

int main(void)
{
  int a, b;
  int x;

  scanf("%d%*c", &a);
  scanf("%d%*c", &b);

  x = a + b;

  printf("X = %d\n", x);

  return 0;
}
