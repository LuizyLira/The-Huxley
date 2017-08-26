#include <stdio.h>

int main()
{
	float massa, altura, imc;

	scanf("%f%f", &massa, &altura);

	if(massa >= 1 && massa <= 500)
	{
		if(altura >= 1 && altura <= 2.8)
		{
			imc = (massa/(altura*altura));
			printf("%.2f\n", imc);
		}
	}

	else
	{
		printf("SEM RESPOSTA\n");
	}

	return 0;
}