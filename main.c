

#include <stdio.h>

int main()
{
  int num1, num2, num3, num4;
  float soma, media;

  printf("Insira a primeira nota: ");
  scanf("%d", &num1);

  printf("Insira a segunda nota: ");
  scanf("%d", &num2);

    printf("Insira a terceira nota: ");
  scanf("%d", &num3);

    printf("Insira a quarta nota: ");
  scanf("%d", &num4);

  soma = (num1 + num2 + num3 + num4);

  media = soma / 4;

  printf("A media do aluno foi: %.2f", media);

  return 0;
}
