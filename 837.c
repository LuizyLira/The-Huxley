#include <stdio.h>

int main()
{
	int corredores[5], i, j, aux;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &corredores[i]);
	}

	for (i = 0; i < 5; i++)
	{
		for(j = i+1; j < 5; j++)
		{
			if(corredores[i] < corredores[j])
			{
				aux = corredores[i];
				corredores[i] = corredores[j];
				corredores[j] = aux;
			}
		}
	}

	for(i = 0; i < 5; i++)
	{
		printf("%d - %d km/h\n", i+1, corredores[i]);
	}
	
	return 0;
}