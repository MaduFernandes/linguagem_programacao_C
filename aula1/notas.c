#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int matricula;
    double va1, va2, va3;
    double notas;
    int soma;

    printf("Informe a matricula do aluno \n");
    scanf("%d", &matricula);
    while (matricula != 0)
        while (va1 > 0 || va1 <= 10)
        {
            printf("Informe a nota da VA1 : \n");
            scanf("%lf", &va1);
            while (va2 > 0 || va2 <= 10)
            {
                printf("Informe a nota da VA2 : \n");
                scanf("%lf", &va2);
                while (va3 > 0 || va3 <= 10)
                {
                    printf("Informe a nota da VA3 : \n");
                    scanf("%lf", &va3);
                    soma = (va1 + va2 + va3);
                    printf("O resultado da soma é %d\n", soma);
                }
            }
        }
    return 0;
}