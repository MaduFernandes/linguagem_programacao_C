#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;

    for ( i = 0; i < 100; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &num);
        system("clear");
        printf("O valor digitado foi: %d\n", num);
    }
     
    return 0;
}