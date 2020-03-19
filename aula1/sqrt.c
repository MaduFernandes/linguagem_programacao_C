#include<stdio.h>
#include<math.h>

int main()
{
	double num;
	double resultado;
	printf("Informe um numero :");
	scanf("%lf", &num);
	resultado = sqrt(num);	
	printf("O resultado é %lf\n", resultado);
	return 0;
}
