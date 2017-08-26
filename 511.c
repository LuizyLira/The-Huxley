#include <stdio.h>

int main()
{
	int sexo, idade;
	scanf("%d%d", &sexo, &idade);

	if(sexo == 0 && idade == 1)
	{
		printf("1\n");
	}

	else if(sexo == 0 && idade == 0)
	{
		printf("0\n");
	}

	else if(sexo == 1 && idade == 1 || idade == 0)
	{
		printf("0\n");
	}

	else 
	{
		printf("0\n");
	}

	return 0;
}