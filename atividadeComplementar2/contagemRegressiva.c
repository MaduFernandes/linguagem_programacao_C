#include <stdio.h>
#include <stdlib.h>


int main()
{
    int contagem = 10;
    
    while(contagem)
    {
        printf("%d\n", contagem);
        contagem = contagem - 1;
    }
    printf("Fim!!!");

    return 0;
}