#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ 
    float massa, altura, imc;

    printf("'''''''Informe sua massa:'''''''\n");
    scanf("%f", &massa);
    printf("'''''''Informe sua altura:'''''''\n");
    scanf("%f", &altura);

    imc = massa/(altura * altura);

    if (imc > 39.9) {
        printf("'''''''Obesidade grau 3, seu IMC é  %f'''''''", imc);
    } else if (imc >= 34.9 && imc <= 39.9)
    {
        printf("'''''''Obesidade grau 2 IMC é  %f'''''''", imc);

    } else if (imc >= 29.9 && imc <= 34.9)
    {
        printf("'''''''Obesidade grau 1, seu IMC é  %f'''''''", imc);

    } else if (imc >= 24.9 && imc <= 29.9)
    {
        printf("'''''''Você está acima do peso, seu IMC é  %f'''''''", imc);

    } else if (imc >= 18 && imc <= 24.9)
    {
        printf("'''''''Seu peso está normal, seu IMC é  %f'''''''", imc);
    } else if (imc < 18)
    {
        printf("'''''''Você está abaixo do peso, seu IMC é  %f'''''''", imc);
    } else
    {
        printf("'''''''Por favor, verificar se seus dados estão corretos'''''''");
    }

    return 0;
}