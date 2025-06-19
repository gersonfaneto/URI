#include <stdio.h>

int main(void)
{
  int biggest, current;

  biggest = 0;

  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &current);
    if (current > biggest)
      biggest = current;
  }

  printf("%d eh o maior\n", biggest);

  return 0;
}
