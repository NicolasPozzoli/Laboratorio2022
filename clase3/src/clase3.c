/*
 ============================================================================
 Name        : clase3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float division(float dividendo,float divisor);
int main(void) {
	setbuf (stdout ,NULL);
	int numero1;
	int numero2;
	float rta;
printf("Ingrese un numero \n");
scanf("%d",&numero1);

printf("Ingrese otro numero \n");
scanf("%d",&numero2);

rta=division(numero1,numero2);

printf("El resultado es:%.2f\n",rta);

	return EXIT_SUCCESS;
}
float division(float dividendo,float divisor)
{
	float resultado;
	resultado=dividendo/divisor;
	if(divisor==0)
	{
		resultado=0;
		printf("No se puede dividir por 0\n");
	}
	return resultado;
}
