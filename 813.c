#include <stdio.h>

ypedef struct
{
    int x1, y1, x2, y2;
} Coords;

int main()
{
    Coords inicio, atual;
    int possivel = 1, caso = 1, N, i;

    while( scanf( "%d", &N ) )
    {
        if( !N )  return 0;
        possivel = 1; 

        for( i = 0; i < N; i++ )
        {
            scanf( "%d%d%d%d", &atual.x1, &atual.y1, &atual.x2, &atual.y2 );
            
            if( i == 0 ) inicio = atual;
            else
            {
               if(atual.x2 < inicio.x1 || atual.y2 > inicio.y1 || atual.x1 > inicio.x2 || atual.y1 < inicio.y2 )
               {
                  possivel = 0;
               } 

               else
               {
                  if( inicio.x1 < atual.x1 && atual.x1 < inicio.x2 ) inicio.x1 = atual.x1;
                  if( atual.x2 > inicio.x1 && atual.x2 < inicio.x2 ) inicio.x2 = atual.x2;
                  if( atual.y1 < inicio.y1 && atual.y1 > inicio.y2 ) inicio.y1 = atual.y1;
                  if( atual.y2 < inicio.y1 && atual.y2 > inicio.y2 ) inicio.y2 = atual.y2;
               } 
            }
        }

         printf( "Teste %d\n", caso++ );

         if( !possivel ) puts( "nenhum\n" );
         else printf( "%d %d %d %d\n\n", inicio.x1, inicio.y1, inicio.x2, inicio.y2 );
    }
} 