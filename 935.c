#include <stdio.h>

int main()
{
	float a, b, c, media;

	scanf("%d\n %d\n %d", &a, &b, &c);
	
	printf("Informe a primeira nota:\n");
	printf("Informe a segunda nota:\n");
	printf("Informe a terceira nota:\n");

	media = (a + b + c)/3;

	if(media >= 7.0)
	{
		printf("Aprovado com media: %20f\n", media);
	}

	if(media >= 5.0 && media < 7.0)
	{
		printf("Recuperacao com media: %20f\n", media);
	}

	if(media < 5.0)
	{
		printf("Reprovado com media: %20f\n", media);
	}

	return 0;
}