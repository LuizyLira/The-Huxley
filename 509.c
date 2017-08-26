#include <stdio.h>

int main()
{
	int x, y, maior, igual, menor, diferente, maiorI, menorI;

	scanf("%d%d", &x, &y);

	maior = (x > y) ? printf("1\n") : printf("0\n"); 
	igual = (x == y) ? printf("1\n") : printf("0\n"); 
	menor = (x < y) ? printf("1\n") : printf("0\n"); 
	diferente = (x != y) ? printf("1\n") : printf("0\n"); 
	maiorI = (x > y || x == y) ? printf("1\n") : printf("0\n"); 
	menorI = (x < y || x == y) ? printf("1\n") : printf("0\n"); 

	return 0;
}