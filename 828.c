#include <stdio.h>

int main()
{

	float ghora, thoras, salario;

	scanf("%f%f", &ghora, &thoras);

	salario = ghora*thoras;
	printf("Informe quanto ganha por hora:\nInforme a quantidade mensal de trabalho:\nResultado: %.1f\n", salario);

	return 0;
}