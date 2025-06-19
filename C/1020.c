#include <stdio.h>

int main(void)
{
  int days, months, years;

  scanf("%d", &days);

  years = days / 365;
  days -= (years * 365);

  months = days / 30;
  days -= (months * 30);

  printf("%d ano(s)\n", years);
  printf("%d mes(es)\n", months);
  printf("%d dia(s)\n", days);

  return 0;
}
