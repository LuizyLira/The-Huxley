#include <stdio.h>

int main()
{
  int i, n;
  scanf("%d", &n);
  i = 1;

  while( i <= 9 )
  {
    printf("%d X %d = %d\n", n, i, n*i);
    ++i;
  }
  
  return 0;
}