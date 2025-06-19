#include <stdio.h>

int main(void)
{
  int a, b;
  int sum;

  scanf("%d%*c", &a);
  scanf("%d%*c", &b);

  sum = a + b;

  printf("SOMA = %d\n", sum);

  return 0;
}
