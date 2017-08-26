#include <stdio.>

int main()
{
	double x, y, dobro, aux;

	scanf("%lf%lf", &x, &y);

	if(x > y)
	{
		printf("%.2lf\n", x*2);
	}

	if(y >= x)
	{
		printf("%.2lf\n", y*2);
	}

	return 0;
}