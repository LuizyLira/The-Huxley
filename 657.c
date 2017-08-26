#include <stdio.h>
 
int main() 
{
 	int k, m, n, x, y, i;
 	while (scanf("%i", &k)) 
 	{
 		if 	(k == 0) 
 		{
 			break;
 		}
 	
		scanf("%i %i", &m, &n);
	
		for(i = 0; i < k; i ++) 
		{
			scanf("%i %i", &x, &y);

			if(x == m || y == n) {
				printf("divisa\n");
			} else if(x > m && y > n) {
				printf("NE\n");
			} else if(x < m && y < n) {
				printf("SO\n");
			} else if(x < m && y > n) {
				printf("NO\n");
			} else if(x > m && y < n) {
				printf("SE\n");
			}
		}
 	}
	return 0;
}