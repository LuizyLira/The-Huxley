#include <stdio.h>
#include <math.h>

int main ()
{
	float x1, y1, x2, y2, D, x, y;
	scanf("%f %f\n %f %f", &x1, &y1, &x2, &y2);

	x = x1-x2;
	y = y1-y2;
	D = sqrt (pow(x,2) + pow(y,2));

	printf("%.4f", D);
	
	return 0;
}