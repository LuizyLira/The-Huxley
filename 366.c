#include <stdio.h>

int main()
{
    
	int n, v0, menor;
	scanf("%d%d", &n, &v0);
	
	int valor_do_dia;
	scanf("%d", &valor_do_dia);

	menor = v0 + valor_do_dia;
	v0 = v0 + valor_do_dia;
	
	int i;

	for (i = 0; i < n-1 ; ++i)
	{
		scanf("%d", &valor_do_dia);
		v0 = v0 + valor_do_dia;
		if( v0 < menor )
		{
			menor = v0;
		}
	}
	
	printf("%d\n", menor);
	
	return 0;
}