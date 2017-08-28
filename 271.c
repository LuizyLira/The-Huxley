#include <stdio.h>

int main ()
{
  double a, b, c;
  scanf("%lf", &a);

  b = ((a*a)/10000);
  c = (3.14159 * b);

  printf("Area = %.4lf\n", c);

  return 0;
}