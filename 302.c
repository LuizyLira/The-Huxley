#include <stdio.h>

int main()
{
	int vx, vy, d, r;
	float tempo;

	scanf("%d%d%d", &vx, &vy, &d);

	r = vy-vx;
	tempo = (((float)d/(float)r)*60);

	printf("%.0f minutos\n", tempo);
	return 0;
}