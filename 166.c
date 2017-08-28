#include <stdio.h>

int main()
{
	int n, unidade;

	scanf("%d", &n);

	unidade = n%10;

	printf("%d", unidade);

	return 0;
}