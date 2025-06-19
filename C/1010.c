#include <stdio.h>

#define MAX_INPUT 2

int main(void)
{
  int product_id, units_in_stock;
  float price_per_unity, value_to_pay;

  value_to_pay = 0;

  for (int i = 0; i < MAX_INPUT; ++i)
  {
    scanf("%d%d%f", &product_id, &units_in_stock, &price_per_unity);
    value_to_pay += units_in_stock * price_per_unity;
    scanf("%*c");
  }

  printf("VALOR A PAGAR: R$ %.2f\n", value_to_pay);

  return 0;
}
