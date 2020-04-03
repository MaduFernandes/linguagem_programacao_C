#include <stdio.h>
#include<stdlib.h>

int main(){  

  int tamanho = 10, posicao[tamanho], i, soma = 0, media = 0;

  for(i = 0; i<tamanho; i++){

    printf("Digite o %d. valor: ", i+1);
    scanf("\n%d", &posicao[i]);

    if (posicao[i] < 0)
    {
        printf("Por favor digitar somente números positivos\n");
    }  
  }

  for(i = 0; i < tamanho; i++){

    soma = soma + posicao[i];
    media = soma / 9;

  }

  for(i = 0; i < tamanho; i++){

    printf("Posição[%d] = %d\n", i+1, posicao[i]); 
  }
  printf("A media é: %d\n", media);

    return 0;
}
