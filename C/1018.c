#include <stdio.h>

const int NOTES[] = {100, 50, 20, 10, 5, 2, 1};
const int NOTES_LENGHT = (sizeof(NOTES) / sizeof(NOTES[0]));

int main(void)
{
  int total, subset;

  scanf("%d", &total);

  printf("%d\n", total);

  for (int i = 0; i < NOTES_LENGHT; ++i)
  {
    subset = (total / NOTES[i]);
    printf("%d nota(s) de R$ %d,00\n", subset, NOTES[i]);
    total -= subset * NOTES[i];
  }

  return 0;
}
