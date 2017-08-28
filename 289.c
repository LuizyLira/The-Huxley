#include <stdio.h>

int main()
{
  int F, I, contador=0;
  scanf ("%d%d", &F, &I);
  
  if (F >= 140 && I >= 14){
    contador++;
  }
  if (F >= 150 && I >= 12){
    contador++;
  }
  if (F >= 170 || I >= 16){
    contador++;
  }
  printf("%d\n", contador);
  
  return 0;
}