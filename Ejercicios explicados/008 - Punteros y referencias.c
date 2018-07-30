// PUNTEROS Y REFERENCIAS

// Librerias
#include <stdio.h>
#include <stdlib.h>

// Funcion principal
int main(void) {
	// Dando valores a variables
	int edad,anio_actual,anio_nacimiento;
	
	// Solicitamos edad
	printf("Edad? ");
	fflush(stdin);
	scanf("%i",&edad);
	
	// Solicitamos año actual
	printf("A%co actual? ",164);
	fflush(stdin);
	scanf("%i",&anio_actual);
	
	// Solicitamos año nacimiento
	printf("A%co nacimiento? ",164);
	fflush(stdin);
	scanf("%i",&anio_nacimiento);
	
	// Imprimiendo en pantalla los resultados
	printf("Edad %i, a%co actual %i, y a%co de nacimiento %i.\n",edad,164,anio_actual,164,anio_nacimiento);
	
	getchar();
	
	return 0;
}
