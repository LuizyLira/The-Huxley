#include <stdio.h>

int main ()
{
	long int N;
	scanf("%ld", &N);
	
	if(N > 0 && N%2 == 0)
	{
		printf("POSITIVO PAR");
	}
	else if(N > 0 && N%2 != 0)
	{
		printf("POSITIVO IMPAR");
	}
	else if(N < 0 && N%2 == 0)
	{
		printf("NEGATIVO PAR");
	}
	else if(N < 0 && N%2 != 0)
	{
		printf("NEGATIVO IMPAR");
	}
	else if(N == 0)
	{
		printf("NULO");
	}
	return 0;
}