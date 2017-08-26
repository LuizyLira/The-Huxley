#include <stdio.h>

int main()
{
	float raio, volume;

	scanf("%f", &raio);

	volume = ((4*3.14159*pow(raio,3))/3);

	printf("VOLUME = %.3f\n", volume);

	return 0;
}