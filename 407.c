#include <stdio.h>

int main()
{
	int a, b, x, y, n, i, count = 1, aux = 0, temp = 0;

	while(scanf("%d %d", &a, &b) != EOF)
	{
		x = a; 
		y = b;
		aux = 0;

		if(x > y)
		{
			temp = x;
			x = y;
			y = temp;
		}

		for(i = x; i <= y; i++)
		{
			n = i;
			while(n != 1)
			{
				if(n%2 == 0)
				{
					n = n/2;
					count++;
				}
				else
				{
					n = ((n*3)+1);
					count++;
				}
			}
			if(count > aux)
			{
				aux = count;
			}

			count = 1;
		}
		
		printf("%d %d %d\n", a, b, aux); 
	}
}