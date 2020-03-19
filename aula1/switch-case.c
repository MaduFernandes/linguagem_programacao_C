#include <stdio.h>

int main()
{
	int menu;
	double num1, num2;

	printf("Informe os números:");
	scanf("%lf", &num1);
	scanf("%lf", &num2);

	printf("Digite 1 para soma ou 2 para multiplicação dos números:\n");
	scanf("%d", &menu);

	switch (menu)
	{
	case 1:
		printf("A soma é %lf\n", num1 + num2);
		break;

	case 2:
		printf("A multiplicação é %lf\n", num1 * num2);
		break;

	default:
		printf("Valor menu incorreto");
	}
	return 0;
}
