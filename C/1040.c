#include <stdio.h>

int main(void)
{
  double n1, n2, n3, n4, n5;
  double final_score;

  scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

  final_score = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
  printf("Media: %.1lf\n", final_score);

  if (final_score >= 7)
  {
    printf("Aluno aprovado.\n");
  }
  else if (final_score < 5)
  {
    printf("Aluno reprovado.\n");
  }
  else
  {
    printf("Aluno em exame.\n");
    scanf("%lf", &n5);
    final_score = (final_score + n5) / 2;
    printf("Nota do exame: %.1lf\n", n5);
    if (final_score >= 5)
    {
      printf("Aluno aprovado.\n");
    }
    else
    {
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n", final_score);
  }

  return 0;
}
