#include <stdio.h>

int main(){

    int valorInicial = 0;
    int valorDeRepeticao = 0;
    int maiorValor = 0;
    int maiorValorLido = 0;

    printf("###### Por favor, informar um valor ######\n");
    scanf("%d", &valorInicial);

    while (valorInicial != 0)
    {
        printf("###### Informe um valor ######\n");
        scanf("%d", &valorDeRepeticao);

    if (valorDeRepeticao == maiorValor)
    {
        maiorValorLido++;
    } else if (valorDeRepeticao > maiorValor)
    {       
        maiorValor = valorDeRepeticao;
        maiorValorLido = 1;
    }
        printf("###### O maior valor é %d e foi lido apenas %d vez ######\n", maiorValor, maiorValorLido);
        valorInicial--;
    }
    return 0;
}