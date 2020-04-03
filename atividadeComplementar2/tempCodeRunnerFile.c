#include <stdio.h>

int main() {

int maiorValor = 0, qtdVezezMaiorValor = 0, qtdAdicionarNumero = 0, entrada[qtdAdicionarNumero];

printf("Informe a quantidade de vezes que você vai digitar: \n");
scanf("%d", &qtdAdicionarNumero);

for (int i = 1;i <= qtdAdicionarNumero;i++) {
    printf("Informe um valor: \n");
    scanf("%d", &qtdAdicionarNumero);
    if(entrada[qtdAdicionarNumero] >= maiorValor) {
        if (maiorValor == entrada[qtdAdicionarNumero]) {
            qtdVezezMaiorValor++;
        }else{
            maiorValor = entrada[qtdAdicionarNumero];
            qtdVezezMaiorValor = 1;
        }  
    }
    printf("O maior valor é %d e foi digitado %d vezes \n", maiorValor, qtdVezezMaiorValor);
    }
    return 0;
}