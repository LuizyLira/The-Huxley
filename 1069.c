#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float lado, altura, largura, raio, area, perimetro, comprimento;
	char formag;

	printf("Escolha uma forma geometrica: (Q)uadrado, (R)etangulo ou (C)irculo.\n");

	if(formag != 'Q' || formag != 'R' || formag != 'C')
	{
		printf("Escolha opção inválida!!\n");
	}	

	switch(formag)
	{
		case('Q'):
		printf("Qual é o tamanho do lado: \n");
		scanf("%f", &lado);
		area = (lado*lado);
		perimetro = (lado*4);
		dec = valor*100;
		tec = valor*1000;
		if(tec%10 > 5)
		{
		    tic = round(dec);
		}
		else
		{
		    tic = dec;
		}
		if(tic%10 == 0)
		{
		    printf("%.1lf\n", valor);
		}
		else
		{
		    printf("%.2lf\n", valor);
		}

		break;

		case('R'):
		printf("Qual é o tamnho da altura e largura: \n");
		scanf("%f\n%f\n", &altura, &largura);
		area = 2*(altura+largura);
		perimetro = (altura*largura);
		printf("%.2f\n%.2f\n", area, perimetro);
		break;

		case('C'):
		printf("Qual é o tamanho do raio: \n");
		scanf("%f", &raio);
		area = 3.14*(pow(raio,2));
		comprimento = (2*3.14*raio);
		printf("%.2f\n%.2f\n", area, comprimento);
		break;
	}

	return 0;
}