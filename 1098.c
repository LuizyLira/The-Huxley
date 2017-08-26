#include <stdio.h>

int main()
{
	int idade;

	scanf("%d", &idade);

	if(idade >= 5 && idade <= 7)
	{
		printf("Infantil A\n");
	}

	else if(idade >= 8 && idade <= 10)
	{
		printf("Infantil B\n");
	}

	else if(idade >= 11 && idade <= 13)
	{
		printf("Juvenil A\n");
	}

	else if(idade >= 14 && idade <= 17)
	{
		printf("Juvenil B\n");
	}

	else if(idade >= 18 && idade <= 40)
	{
		printf("Adulto\n");
	}

	else if(idade >= 41)
	{
		printf("Master\n");
	}

	else
	{
		printf("Idade Invalida.\n");
	}
}