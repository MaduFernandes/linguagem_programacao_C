#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int valor, raiz, opcao;

    printf("###### Por favor, informe um valor ###### \n");
    scanf("%d", &valor);

    printf("###### MENU DO USUARIO ###### \n\n");
    
    printf("###### 1.Raiz Quadrada ###### \n ###### 2.Número ao Quadrado ###### \n ###### 3.Não fazer nada ###### \n\n");
    
    printf("###### Informe um número ###### \n");
    
    scanf("%d", &opcao);
    
    system("cls || clear");

    switch (opcao)
    {
    case 1:
        raiz = sqrt(valor);
        printf("A raiz é %d", raiz);
        break;
    case 2:
        valor = valor * 2;
        printf("O quadrado do número é %d", valor);
        break;
    case 3:
        printf("Programa encerrado");
        break;  
    }
}