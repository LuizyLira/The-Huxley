#include <stdio.h>
#include <math.h>
 
int main() 
{
	int d = 0, vf = 0, vg = 0;
	float distancia = 0, tf = 0, tg = 0;
 
	while(scanf("%i %i %i", &d, &vf, &vg), d != -1 && vf != -1 && vg != -1) 
	{
		distancia = sqrt(144 + pow(d,2));
		tf = 12.0 / vf;
		tg = distancia / vg;
		
		if (tf >= tg)
		{
			printf("S"); 
		}
		
		else
		{
			printf("N"); 
		}
			
		printf("\n");
	}
	
	return 0;
}