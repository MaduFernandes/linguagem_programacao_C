#include <stdio.h>
#include <math.h>

int main() {

int valor = 0, qntdPar = 0, qntdNum = 0;

   while (valor != 1000) {
    printf("Informe um valor: \n");
    scanf("%d", &valor);

    if (valor % 2 == 0){
        printf("O número %d é par\n", valor);
        qntdPar++;
    } else
    {
        printf("O número %d é impar\n", valor);
    }
    qntdNum++;
    printf("Quantidade de números pares: %d\n", qntdPar);
    printf("Quantidade de números lidos: %d\n", qntdNum);
}
    return 0;
}