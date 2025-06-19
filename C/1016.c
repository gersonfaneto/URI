#include <stdio.h>

int main(void)
{
  int distance_in_kilometers, minutes;

  scanf("%d", &distance_in_kilometers);

  minutes = distance_in_kilometers * 2;

  printf("%d minutos\n", minutes);

  return 0;
}
