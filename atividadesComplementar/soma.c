#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c;
  int soma = 0;

  printf("Digite 3 valores:\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  system("clear"); 
  soma = (a + b + c);

  printf("A soma dos valores é: %d", soma);


    return 0;
}   