#include <stdio.h>

int main(void)
{
  int a, b;
  int product;

  scanf("%d%*c", &a);
  scanf("%d%*c", &b);

  product = a * b;

  printf("PROD = %d\n", product);

  return 0;
}
