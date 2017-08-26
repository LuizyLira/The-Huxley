#include <stdio.h>

int main()
{
	int f, c;
	scanf("%d", &f);

	c = (f-32)/1.8;
	
	printf("Digite uma temperatura na escala Fahrenheit: \nTemperatura em Celsius: %d\n", c);

	return 0;
}