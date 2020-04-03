#include <stdio.h>

int main()
{
    int num;
    int i;   

    printf("Usando for \n");
    for (i = 1; i <= 100; i++)
    {
            num = num + 1;
            printf("%d\n", num);
    } 

    printf("Usando while\n");
    i = 1;
    while (i <= 100)
    {
        printf("%d\n", i++);
        i++;
    }
    printf("Usando do while\n");
    i = 1;
    do {
        printf("%d\n", i++);
        
    } while (i <= 100);
        
    return 0;
}
