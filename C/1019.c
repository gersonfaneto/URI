#include <stdio.h>

int main(void)
{
  int hours, minutes, seconds;

  scanf("%d", &seconds);

  hours = seconds / 3600;
  minutes = (seconds % 3600) / 60;
  seconds -= (hours * 3600) + (minutes * 60);

  printf("%d:%d:%d\n", hours, minutes, seconds);

  return 0;
}
