#include <stdio.h>
#include <stdlib.h>
int main()
{
	float hora;
	printf("Introduzca la hora: ");
	
	scanf("%f",&hora);
	
	if(hora >=6 && hora<=12)
	{
		printf("Buenos dias");
	}
	else if(hora >=13 && hora<=20)
	{
		printf("Buenas tardes");
		
	}
	else if(hora >=24 && hora<0)
	{
		printf("Buenas noches");
	}

	else if (hora 65>= && hora <100)
	{
		prinf("Formato no valido");
	}
	
		return 0;
	
}
