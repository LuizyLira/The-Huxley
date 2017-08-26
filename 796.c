#include <stdio.h>

long int squaring(base, expoente)
{
	if(expoente == 0) return 1;
	else if(expoente == 1) return base;
	else if(expoente%2 == 0) return squaring((base*base)%100, expoente/2);
	else if(expoente%2 != 0) return base*squaring((base*base)%100, ((expoente-1)/2));
}

int main()
{
    long int n1, n2, i, p1 = 0, p2 = 0, r1, r2;

    while(scanf("%ld %ld", &n1, &n2) != EOF)
    {
        
        r1 = squaring(n1, n1) % 100;
        r2 = squaring(n2, n2) % 100;
        
        if(r1 > r2)
        {
            printf("%ld\n", n1);
        }
        else if(r1 < r2)
        {
            printf("%ld\n", n2);
        }
        else
        {
            printf("0\n");
        }
    }
    
    return 0;
}