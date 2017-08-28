#include <stdio.h>
#include <math.h>

int primo(int n)
{
	int x, y, i;

	if(n == 1)
	{
		return 0;
	}

	for(i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0)
		{
			return 0;
		}
	}
		return n;
}

int main()
{
	int x, y, i, aux;
	scanf("%d %d", &x, &y);

	if(x < y)
	{		
		for(i = y; i >= x; i--)
		{ 
			if(primo(i))
			{
				printf("%d\n", i);
			}
		}
	}

	if (x > y)
	{
		for(i = x; i >= y; i--)
		{
			if(primo(i))
			{
				printf("%d\n", i);
			}
		}
	}

	return 0;
}