#include <stdio.h>
#include <math.h>

int main()
{
	int altura = 0, horizontal = 0;
	int entradas, i, sentido;
	sentido = 1;
	scanf("%d", &entradas);
	getchar();
	char comando, subir = 'S', frente = 'F', volta = 'V', descer = 'D';

	for( i = 0; i < entradas; i++ )
	{
		scanf("%c", &comando);
		getchar();

		if( comando == 'S' ) 
		{
			altura = altura + 10;
			if(altura > 200)
			{
				altura = altura - 10;
			}
		}

		else if( comando == 'D')			
		{
			altura = altura - 10;
			if( altura < 0 )
			{
				altura = altura + 10;
			}
		}

		else if( comando == 'F' )
		{
			if( altura > 0 )
			{
				horizontal = horizontal + sentido*10;

				if( horizontal > 2000 )
				{
					horizontal = horizontal - 10;
				}
				if(horizontal < -2000)
				{
					horizontal = horizontal + 10;
				}
			}
		}

		else if( comando == 'V' )
		{
			if( altura > 0 )
			{
				horizontal = horizontal + sentido*10;
				if( horizontal < - 2000)
				{
					horizontal = horizontal + 10;
				}
				if( horizontal > 2000 )
				{
					horizontal = horizontal - 10;
				}
				sentido = -sentido;
			}
		}
	}
	
	horizontal = abs(horizontal);
	printf("%d %d\n", altura, horizontal);
	return 0;
}