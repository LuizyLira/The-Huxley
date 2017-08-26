#include <stdio.h>

int main()
{
	int a, b, c, d, e, f, soma;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	soma = a+b+c+d+e+f;

	if(soma >= 100)
	{
		printf("Classificado\n");
	}

	else
	{
		printf("Eliminado\n");
	}
	
	return 0;
}