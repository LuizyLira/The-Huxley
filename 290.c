#include <stdio.h>

int main() 
{

	float codigo1, uni1, valor1, codigo2, uni2, valor2, total;

	scanf("%d%d%f %d%d%f", &codigo1, &uni1, &valor1, &codigo2, &uni2, &valor2);

	total = (uni1*valor1) + (uni2*valor2);
	printf("VALOR A PAGAR: R$ %.2f\n", total);

  return 0;
}