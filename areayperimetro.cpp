//Oswaldo Rodriguez Lucio IA187
#include <math.h>
#include <stdio.h>

#define PI 3.1416

int main ()
{
	float area, perimetro, radio;
	printf("\n Valor del radio: " );
	scanf("%f", &radio);
	
	area=PI*pow(radio,2);
	
	printf("\ n El %crea de la circuferencia es: %.f",160,area);
	printf("\n El per%cmetro es: %f",161,2*PI*radio);
	
	return 0;
}
