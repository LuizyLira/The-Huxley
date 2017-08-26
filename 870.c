#include <stdio.h>

int max( int a , int b )
{
	if( a > b )
		return a;
	return b;
}

int main(int argc, char const *argv[])
{
	int N;
	scanf("%d", &N);
	int i, j;
	int array[N];
	int ans;
	for ( i = 0; i < N; ++i)
		scanf("%d", &array[i]);
	ans = array[0];
	for ( i = 0; i < N ; ++i)
	{
		int sum = 0;
		for ( j = i; j < i+N; ++j)
		{
			sum += array[j%N];
			ans = max( ans , sum );
		}
	}
	printf("%d\n", ans);
	return 0;
}