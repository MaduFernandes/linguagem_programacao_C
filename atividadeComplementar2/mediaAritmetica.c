#include <stdio.h>
#include<stdlib.h>

int main(void){  

  int tamanho = 100; 
  int posicao[tamanho];
  int i; 
  int soma = 0;
  int media = 0;

  for(i = 0; i<tamanho; i++){

    printf("Digite o %d. valor: ", i+1);
    scanf("\n%d", &posicao[i]);     
  
  }

  for(i = 0; i<tamanho; i++){

    soma = soma + posicao[i];
    media = soma / 99;

  }

  for(i = 0; i<tamanho; i++){

    printf("\nPosição[%d] = %d", i+1, posicao[i]);
    
  }
  printf("\nSoma: %d\n", soma);
  printf("\nA media é: %d\n", media);

    return 0;
}
