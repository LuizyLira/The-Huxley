#include <stdio.h>

void lado( int tamanho )
{
	int i;
	printf("*");
	for (i = 1; i <= tamanho; ++i)
	{
		printf("*");
		if (i != tamanho) printf(" ");
	}
	printf("*\n");
}

void lateral(int tamanho, int linha, int imprimir )
{
	printf("*");
	int i;
	int direita = 1 + linha;
	int esquerda = 2*tamanho - linha-1;
	for (i = 1; i < tamanho*2; ++i)
	{
		if (i == direita || i == esquerda)	printf("*");
		else
		{
			if (i > direita && i < esquerda)
			{
				if (imprimir) printf(".");
				else printf(" ");
			}
			else printf(" ");
		}
	}
	printf("*\n");
}

void desenho( int tamanho , int nivel)
{
	lado(tamanho);
	int printar, i;
	int aux = nivel;
	for (i = 1; i < tamanho; ++i)
	{
		printar = 0;
		--aux;
		if ( aux < 0 ) printar = 1;
		lateral(tamanho, i , printar);
	}
	for (i = tamanho-1; i > 0; --i)
	{
		printar = 0;
		if (i <= nivel ) printar = 1;
		lateral(tamanho, i , printar);
	}
	lado(tamanho);
}

int main()
{
	int tamanho, nivel;
	int casos, i;
	scanf("%d", &casos);
	for (i = 0; i < casos; ++i)
	{
		scanf("%d%d", &tamanho, &nivel);
		printf("Caso %d:\n", i+1);
		desenho(tamanho, nivel);
	}
	return 0;
}