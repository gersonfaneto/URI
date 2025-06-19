#include <stdio.h>

int main(void)
{
  unsigned int x, y;

  while (scanf("%u %u", &x, &y) != EOF)
  {
    printf("%u\n", x ^ y);
  }

  return 0;
}
