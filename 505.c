#include <stdio.h>

int main()
{
	int quant, i, desl;
	scanf("%d", &quant);
	int array[quant];
	for( i = 0 ; i < quant ; ++ i )
	{
		scanf("%d", &array[i]);
	}
	scanf("%d", &desl);
	for( i = 0 ; i < quant ; ++ i )
	{
		printf("%d\n", array[(desl+i)%quant]);
	}
	return 0;
}