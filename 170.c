#include <stdio.h>
#include <math.h>

int primo(int n)
{
	int a, b, c, d, i;

	for(i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0)
		{
			return 0;
		}
	}
	if(n > 1)
	{
		return n;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a, b, c, d, produto;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	produto = primo(a)*primo(b)*primo(c)*primo(d);
	if(produto != 0)
	{
		printf("%d\n", produto);
	}
	else
	{
		printf("SEM PRODUTO\n");
	}
	return 0;
}