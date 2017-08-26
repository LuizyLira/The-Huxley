#include <stdio.h>

int main()
{
	float m, cm;

	scanf("%f", &m);

	cm = m/0.010000;

	printf("Insira um valor em metros:\nResultado: %.1f\n", cm);

	return 0;
}