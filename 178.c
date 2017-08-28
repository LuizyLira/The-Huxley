#include <stdio.h>

int main()
{
    int A, ano=1986;
    scanf ("%d",&A);

    if ((A>=2010)&&(A<=10000))
    {
	    while (ano<=A)
	    {
	          ano+=76;
	    }

    	printf ("%d",ano);
    }    
          
  return 0;
}