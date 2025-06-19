#include <stdio.h>

#define __array_lenght(array) ((sizeof(array)) / sizeof(array[0]))

const int COINS[] = {100, 50, 25, 10, 5, 1};
const size_t COINS_LENGHT = __array_lenght(COINS);

const int NOTES[] = {10000, 5000, 2000, 1000, 500, 200};
const size_t NOTES_LENGHT = __array_lenght(NOTES);

int main(void)
{
  double input;
  unsigned long total, number;

  scanf("%lf", &input);

  total = input * 100;

  printf("NOTAS:\n");
  for (int i = 0; i < NOTES_LENGHT; ++i)
  {
    number = (total / NOTES[i]);
    printf("%lu nota(s) de R$ %.2f\n", number, (NOTES[i] / 100.f));
    total -= (number * NOTES[i]);
  }

  printf("MOEDAS:\n");
  for (size_t i = 0; i < COINS_LENGHT; ++i)
  {
    number = (total / COINS[i]);
    printf("%lu moeda(s) de R$ %.2f\n", number, (COINS[i] / 100.f));
    total -= number * COINS[i];
  }

  return 0;
}
