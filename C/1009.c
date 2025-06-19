#include <stdio.h>

#define COMMISSION 0.15f

int main(void)
{
  char worker_name[256];
  double sales, salary;

  scanf("%s%*c", worker_name);
  scanf("%lf%*c", &salary);
  scanf("%lf%*c", &sales);

  salary += (sales * COMMISSION);

  printf("TOTAL = R$ %.2f\n", salary);

  return 0;
}
