#include <stdio.h>
#include <stdlib.h>

int main()
{
   float num;

   while(num <= 20) {
       printf("Digite um valor:\n");
       scanf("%f", &num);
       printf("O número digitado é: %lf\n", num);
   }
     
    return 0;
}   