#include <stdio.h>

int main()
{
	int valor, n1 = 0, n2 = 0, n5 = 0, n10 = 0, n20 = 0, n50 = 0, n100 = 0, resto100 = 0, resto50 = 0, resto20 = 0, resto10 = 0, resto5 = 0, resto2 = 0;

	scanf("%d", &valor);

	n100 = (valor/100);
	resto100 = (valor-(n100*100));
	n50 = (resto100/50);
	resto50 = (valor-(n50*50)-(n100*100));
	n20 = (resto50/20);
	resto20 = (valor-(n20*20)-(n50*50)-(n100*100));
	n10 = (resto20/10);
	resto10 = (valor-(n10*10)-(n20*20)-(n50*50)-(n100*100));
	n5 = (resto10/5);
	resto5 = (valor-(n5*5)-(n10*10)-(n20*20)-(n50*50)-(n100*100));
	n2 = (resto5/2);
	resto2 = (valor-(n2*2)-(n5*5)-(n10*10)-(n20*20)-(n50*50)-(n100*100));
	n1 = (resto2/1);

	printf("%d\n", valor);
	printf("%d nota(s) de R$100,00\n", n100);
	printf("%d nota(s) de R$50,00\n", n50);
	printf("%d nota(s) de R$20,00\n", n20);
	printf("%d nota(s) de R$10,00\n", n10);
	printf("%d nota(s) de R$5,00\n", n5);
	printf("%d nota(s) de R$2,00\n", n2);
	printf("%d nota(s) de R$1,00\n", n1);

	return 0;
}