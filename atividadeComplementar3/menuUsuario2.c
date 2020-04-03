#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

   int valor = 0, raiz = 0, opcao = 0, qntDeVezes = 0, cont = 0 ;

    printf("Informe a quantidade de vocês que você quer que o programa repita\n");
    scanf("%d", &qntDeVezes);

    while ( qntDeVezes > cont)
    {    
    printf("###### MENU DO USUARIO ###### \n\n");
    printf("###### 1.Raiz Quadrada ######\n###### 2.Número ao Quadrado ######\n###### 3.Não fazer nada ######\n\n");
    
    printf("###### Informe um número ###### \n");
    scanf("%d", &opcao);

    if (opcao == 3)
    {
       break;
    }
    
    printf("###### Por favor, informe um valor para essa operacao ###### \n");
    scanf("%d", &valor);

    if (opcao == 1) {
        raiz = sqrt(valor);
        printf("A raiz é %d\n", raiz);
    } else if (opcao == 2) {
        valor = valor * 2;
        printf("O quadrado do número é %d\n", valor);
    } else  {
        printf("Programa encerrado\n");
    }  
    qntDeVezes--;
    }
    return 0;
}