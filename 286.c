#include <stdio.h>

int main()
{
  int a, b, c;
  scanf("%d\n%d\n%d\n", &a,&b,&c);

  if(a==1 && b==0 && c==0 || a==0 && b==1 && c==1)
  {
    printf("A");
  }
  if(a==0 && b==1 && c==0 || a==1 && b==0 && c==1)
  {
    printf("B");
  }
  if(a==0 && b==0 && c==1 || a==1 && b==1 && c==0)
  {
    printf("C");
  }
  if(a==0 && b==0 && c==0 || a==1 && b==1 && c==1)
  {
    printf("*");
  }

  return 0;
}