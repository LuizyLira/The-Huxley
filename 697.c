#include <stdio.h>

int main()
{
	float A, B, C, D, E, F, x, y;
	scanf("%fx + %fy = %f", &A, &B, &C);
	scanf("%fx + %fy = %f", &D, &E, &F);

	y = ((F*A)-(D*C))/((A*E)-(D*B));

	x = (C-(B*y))/A;

	printf("%.2f\n%.2f\n", x, y);

	return 0;
}