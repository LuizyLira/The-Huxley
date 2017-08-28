#include <stdio.h>

int main()
{
	int n, un, dez, cen, mil, liga=0;

	scanf("%d", &n);

	un = n%10;
	dez = (n%100)/10;
	cen = (n%1000)/100;
	mil = (n%10000)/1000;

	if(un > 0 || liga == 1) printf("%d", un), liga=1;
	if(dez > 0 || liga == 1) printf("%d", dez), liga=1;
	if(cen > 0 || liga == 1) printf("%d", cen), liga=1;
	if(mil > 0 || liga == 1) printf("%d\n", mil), liga=1;

	return 0;
}