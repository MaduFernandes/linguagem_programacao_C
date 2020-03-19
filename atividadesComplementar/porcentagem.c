#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{

    float produto;
    float desconto;


    printf("Valor do produto sem desconto\n");
    scanf("%f", &produto);
    produto = (produto -  ((produto/100)*25));
    printf("O valor do produto com desconto ficou por %f",produto);

    return 0;
}   