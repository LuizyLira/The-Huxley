#include <stdio.h>

int main()
{
	float salario, nsalario;

	scanf("%f", &salario);

	if(salario < 1000)
	{
		nsalario = (salario*0.30)+salario;
		printf("%.2f\n", nsalario);
	}

	else if(salario >= 1000 && salario <= 2000)
	{
		nsalario = (salario*0.10)+salario;
		printf("%.2f\n", nsalario);
	}
	else
	{
		printf("%.2f\n", salario);
	}

	return 0;
}