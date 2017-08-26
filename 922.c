#include <stdio.h>

int main()
{
	float salario, nsalario;

	scanf("%f", &salario);

	if(salario <= 280)
	{
		nsalario = (salario*0.20)+salario;
		printf("Informe o salario do colaborador:\nSalario antes do reajuste: %.1f\nPercentual de aumento aplicado: 20%%\nValor do aumento: %.14f\nSalario com reajuste: %.2f", salario, salario*0.20, nsalario);
	}

	else if(salario > 280 && salario < 700)
	{
		nsalario = (salario*0.15)+salario;
		printf("Informe o salario do colaborador:\nSalario antes do reajuste: %.1f\nPercentual de aumento aplicado: 15%%\nValor do aumento: %.14f\nSalario com reajuste: %.2f", salario, salario*0.15, nsalario);
	}

	else if(salario >= 700 && salario < 1500)
	{
		nsalario = (salario*0.10)+salario;
		printf("Informe o salario do colaborador:\nSalario antes do reajuste: %.1f\nPercentual de aumento aplicado: 10%%\nValor do aumento: %.14f\nSalario com reajuste: %.2f", salario, salario*0.10, nsalario);
	}

	else
	{
		nsalario = (salario*0.05)+salario;
		printf("Informe o salario do colaborador:\nSalario antes do reajuste: %.1f\nPercentual de aumento aplicado: 5%%\nValor do aumento: %.14f\nSalario com reajuste: %.2f", salario, salario*0.05, nsalario);
	}

	return 0;
}