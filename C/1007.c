#include <stdio.h>

int main(void)
{
  int a, b, c, d;
  int difference;

  scanf("%d%*c", &a);
  scanf("%d%*c", &b);
  scanf("%d%*c", &c);
  scanf("%d%*c", &d);

  difference = ((a * b) - (c * d));

  printf("DIFERENCA = %d\n", difference);

  return 0;
}
