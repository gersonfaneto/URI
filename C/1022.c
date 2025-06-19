#include <stdio.h>

#define __ABS(x)                                                                                                       \
  if ((x) < 0)                                                                                                         \
  x *= -1

typedef struct fraction_t fraction_t;

struct fraction_t
{
  int nominator;
  int denominator;
};

int greatest_common_divisor(int a, int b);

int main(void)
{
  int counter, temp, gcd;
  char operation;
  fraction_t operators[2], result;

  scanf("%d%*c", &counter);

  while (counter--)
  {
    scanf("%d / %d %c %d / %d", &operators[0].nominator, &operators[0].denominator, &operation, &operators[1].nominator,
          &operators[1].denominator);

    switch (operation)
    {
    case '+':
      result.nominator =
        (operators[0].nominator * operators[1].denominator + operators[1].nominator * operators[0].denominator);
      result.denominator = (operators[0].denominator * operators[1].denominator);
      break;
    case '-':
      result.nominator =
        (operators[0].nominator * operators[1].denominator - operators[1].nominator * operators[0].denominator);
      result.denominator = (operators[0].denominator * operators[1].denominator);
      break;
    case '/':
      operators[1].nominator ^= operators[1].denominator;
      operators[1].denominator ^= operators[1].nominator;
      operators[1].nominator ^= operators[1].denominator;
    case '*':
      result.nominator = operators[0].nominator * operators[1].nominator;
      result.denominator = operators[0].denominator * operators[1].denominator;
      break;
    }

    gcd = greatest_common_divisor(result.nominator, result.denominator);

    printf("%d/%d", result.nominator, result.denominator);

    if (gcd != 0)
    {
      result.nominator /= gcd;
      result.denominator /= gcd;
    }

    printf(" = %d/%d\n", result.nominator, result.denominator);
  }

  return 0;
}

int greatest_common_divisor(int a, int b)
{
  __ABS(a);
  __ABS(b);

  if (a == 0 || b == 0)
  {
    return 0;
  }

  if (a == b)
  {
    return a;
  }

  if (a > b)
  {
    return greatest_common_divisor(a - b, b);
  }

  return greatest_common_divisor(a, b - a);
}
