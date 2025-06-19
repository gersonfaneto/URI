#include <stdio.h>

typedef struct product_t product_t;

struct product_t
{
  int code;
  float price;
};

static const product_t STOCK[] = {
  (product_t){
    .code = 1,
    .price = 4.0,
  },
  (product_t){
    .code = 2,
    .price = 4.5,
  },
  (product_t){
    .code = 3,
    .price = 5.0,
  },
  (product_t){
    .code = 4,
    .price = 2.0,
  },
  (product_t){
    .code = 5,
    .price = 1.5,
  },
};

int main(void)
{
  int code, quantity;
  float total;

  scanf("%d %d", &code, &quantity);

  total = quantity * STOCK[code - 1].price;

  printf("Total: R$ %.2f\n", total);

  return 0;
}
