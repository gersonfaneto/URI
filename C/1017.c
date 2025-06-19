#include <stdio.h>

#define FUEL_CONSUMPTION 12.f

int main(void)
{
  int trip_duration, average_speed;
  float fuel_spent;

  scanf("%d", &trip_duration);
  scanf("%d", &average_speed);

  fuel_spent = (trip_duration * average_speed) / FUEL_CONSUMPTION;

  printf("%.3f\n", fuel_spent);

  return 0;
}
