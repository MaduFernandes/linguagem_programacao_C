#include <stdio.h> 

int main(){
    int maior, menor, num, i;

    for (i=0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &num);
        
        if (i==0){
            maior = num;
            menor = num;
        }
            if(num > maior){
              maior = num;
            }
            if(num < menor){
                menor = num;
            }
        }
            
            printf("Menor é: %d ", menor); 
            printf("Maior é: %d", maior);
    return 0;
}