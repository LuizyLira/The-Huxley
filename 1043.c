#include <stdio.h>

int main()
{
	float real, dolar;
	int tec, tic, dec;

	scanf("%f", &real);

	dolar = real*3.55;
	dec = dolar*100;
	tec = dolar*1000;

	if(tec%10 > 5)
	{
	    tic = round(dec);
	}

	else
	{
	    tic = dec;
	}

	if(tic%10 == 0)
	{
    	printf("%.1lf\n", dolar);
	}

	else
	{
	    printf("%.2lf\n", dolar);
	}

	return 0;
}
		