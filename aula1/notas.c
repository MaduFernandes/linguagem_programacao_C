#include <stdio.h>

int main()
{
    int matricula;
    double va1, va2, va3, oat;
    double notas;
    int soma, media;

    printf("Caso queira encerrar o programa, digite 0\n\n");
    printf("Informe a matricula do aluno\n");
    scanf("%d", &matricula);
    
    while (matricula != 0) {
       
        if (va1 > 0 || va1 <= 100) {
            printf("\nInforme a nota da VA1 : \n");
            scanf("%lf", &va1);
                if (va1 > 100) {
                    printf("Informe a nota correta da VA1 : \n");
                    scanf("%lf", &va1);
                }
            if (va2 > 0 || va2 <= 100) {
                printf("Informe a nota da VA2 : \n");
                scanf("%lf", &va2);
                    if (va2 > 100) {
                        printf("Informe a nota correta da VA2 : \n");
                        scanf("%lf", &va2);
                    }
                if (va3 > 0 || va3 <= 100){
                    printf("Informe a nota da VA3 : \n");
                    scanf("%lf", &va3);
                        if (va3 > 100) {
                            printf("Informe a nota correta da VA3 : \n");
                            scanf("%lf", &va3);
                }
       
                if (oat > 0 || oat <= 100) {
                    printf("Informe a nota da OAT : \n");
                    scanf("%lf", &oat);
                        if (oat > 100) {
                            printf("Informe a nota correta da OAT : \n");
                            scanf("%lf", &oat);
                }
                    soma = (va1 + (va2 * 2) + (va3 * 3) + oat);
                    media = soma / 7;
                }

                if (media < 40) {
                    printf("Sua média é %2.d, você foi REPROVADO.", media);
                } else if (media > 40 && media < 60) {
                    printf("Sua média é %2.d, você foi REPROVADO.", media);
                } else if (media > 60 && media < 75) {
                    printf("Sua média é %2.d, você foi APROVADO.", media);
                } else if (media > 75 && media < 90) {
                    printf("Sua média é %2.d, você foi APROVADO.", media);
                } else if (media > 90 && media < 100) {
                    printf("Sua média é %2.d, você foi APROVADO.", media);
                }
            }
        }
    }
    }
    return 0;
}