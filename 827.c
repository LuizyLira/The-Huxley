#include <stdio.h>
#include <math.h>

int main()
{
	float lado, area, dobro;

	scanf("%f", &lado);

	area = pow(lado,2);
	dobro = (area*2);

	printf("Informe a medida de um dos lados do quadrado:\nResultado: %.1f\nDobro: %.1f", area, dobro);

	return 0;
}