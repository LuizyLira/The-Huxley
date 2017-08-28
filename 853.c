#include <stdio.h>
#include <string.h>

void preenche(int altura, int largura, int p, int ex, int ey, int dx, int dy, char matriz[1000][1000])
{
	int i, j;
	for (i = 0; i <= altura; i++)
	{
		for (j = 0; j <= largura; j++)
		{
			if(p == 0)
			{
				if(i == ey || i == dy)
				{
					if(j <= dx && j >= ex) matriz[i][j] = '*';
					else matriz[i][j] = '.';
				}
				else if(i < ey && i > dy)
				{
					if(j == dx || j == ex) matriz[i][j] = '*';
					else matriz[i][j] = '.';
				}
				else matriz[i][j] = '.';
			}
			else
			{
				if(i <= ey && i >= dy && j <= dx && j >= ex) matriz[i][j] = '*';
				else matriz[i][j] = '.';
			}
		}
	}

	for (i = 0; i <= altura; i++)
	{
		for (j = 0; j <= largura; j++)
		{
			printf("%c", matriz[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int altura, largura, p, ex, ey, dx, dy;
	char matriz[1000][1000];
	memset(matriz,(char)0,sizeof(char)*1000*1000);
	scanf("%d%d%d%d%d%d%d", &altura, &largura, &p, &ex, &ey, &dx, &dy);
	preenche(altura, largura, p, ex, ey, dx, dy, matriz);
	return 0;
}