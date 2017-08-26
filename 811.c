#include <stdio.h>

int main()
{
	int roleta, ingresso[100000], i, j, counter = 1;

	while(scanf("%d", &roleta), roleta != 0)
	{ 
		for(i = 1; i <= roleta; i++)
		{
			scanf("%d", &ingresso[i]);

			if(i == ingresso[i])
			{
				printf("Teste %d\n%d\n", counter, i);
			}
		}

		for(i = 0; i < roleta; i++)
		{
			ingresso[i] = 0;
		}

		counter++;
	}
	return 0;
}
