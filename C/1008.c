#include <stdio.h>

int main(void)
{
  int worker_id, worked_hours;
  float hourly_rate, salary;

  scanf("%d%*c", &worker_id);
  scanf("%d%*c", &worked_hours);
  scanf("%f%*c", &hourly_rate);

  salary = hourly_rate * worked_hours;

  printf("NUMBER = %d\n", worker_id);
  printf("SALARY = U$ %.2f\n", salary);

  return 0;
}
