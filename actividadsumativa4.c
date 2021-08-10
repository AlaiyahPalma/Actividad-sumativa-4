#include <stdio.h>
#include <stdlib.h>

void main()
{


	int contador = 1;
	float a,b,c,d,e,promedio;
	
printf("Introduzca el dato %d : ",contador);
	scanf("%f" , &a);
	contador = contador + 1;
	
printf("\n\nIntroduzca el dato %d : ",contador);
	scanf("%f" , &b);
	contador = contador + 1;

printf("\n\nIntroduzca el dato %d : ",contador);
	scanf("%f" , &c);
	contador = contador + 1;
	
printf("\n\nIntroduzca el dato %d : ",contador);
	scanf("%f" , &d);
	contador = contador + 1;
	
	printf("\n\nIntroduzca el dato %d : ",contador);
	scanf("%f" , &e);
	
	


promedio = (a + b + c + d + e)/5;

printf("\n\nLa cantidad del promedio es igual a %1.2f",promedio);

	
}

