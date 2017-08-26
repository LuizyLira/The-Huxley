#include <stdio.h>

int main()
{
	int array1[1000], array2[1000], array3[2000], n, i, j=0;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%d", &array1[i]);
	}
	for(i = 0; i < n; i++)
	{
		scanf("%d", &array2[i]);
	}
	for(i = 0; i < n; i++)
	{
		array3[j] = array1[i];
		j++;
		array3[j] = array2[i];
		j++;
	}
	for(i = 0; i < n*2; i++)
	{
		printf("%d\n", array3[i]);
	}
	return 0;
}