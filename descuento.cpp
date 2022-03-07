#include <stdio.h>

int main ()
{
	char opcion;
	printf("Ingrese un numero: ");
	scanf("%c",&opcion);
	
	switch (opcion)
	{
		case '1':
			printf("Se aplico un descuento del 12.5%");
			break;
		case '2':
			printf("Se aplico un descuento del 8.3%");
			break;
		case '3':
		printf("Se aplico un descuento del 3.2%");
		break;
		case'4':
			printf("Es miembro de la tienda: ");
			break;
		
		default:
		printf("0.0%");
		break;
	}
	printf( "20%");
	
	
	return 0;
}
