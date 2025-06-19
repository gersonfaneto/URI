#include <stdio.h>

int main(void)
{
  int total_distance;
  float fuel_consumed, average_consuption;

  scanf("%d", &total_distance);
  scanf("%f", &fuel_consumed);

  average_consuption = total_distance / fuel_consumed;

  printf("%.3f km/l\n", average_consuption);

  return 0;
}
