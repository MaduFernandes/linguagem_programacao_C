#include<stdio.h>

int main()
{
	int nota;
	printf("Informe a nota do aluno\n");
	scanf("%d",&nota);
	if (nota > 100)
	{
		printf("Você informou a nota errada, por favor digite novamente :");
	}	
	scanf("%d",&nota);
		if(nota < 50)
	{
		printf("Reprovado\n");	
	}else if(nota > 69)
	{
		printf("Você foi Aprovado!!!\n");
	}else 
	{
		printf("VS a Vista....\n");
	}
		return 0;
}
