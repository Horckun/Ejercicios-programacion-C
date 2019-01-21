// Comprobar formato fecha

// Librería
#include <stdio.h>

// Función principal
int main() {
	// Declaración variables
	int dia,mes,anio;
	// Título
	printf("\t=========================\n");
	printf("\t=                       =\n");
	printf("\t= COMPROBACI%cN DE FECHA =\n",224);
	printf("\t=                       =\n");
	printf("\t=========================\n\n");
	
	// Solicitar fecha
	printf("Introduzca un d%ca (dd): ",161);
	fflush(stdin);
	scanf("%d",&dia);
	printf("Introduzca un mes (mm): ");
	fflush(stdin);
	scanf("%d",&mes);
	printf("Introduzca un a%co (aaaa): ",164);
	fflush(stdin);
	scanf("%d",&anio);
	printf("\n");
	
	// Comprobamos fecha
	if((dia <= 31 && dia >= 1) && (mes <= 12 && mes >= 1) && (anio <= 2019 && anio >= 1919)) {
		printf("\tLa fecha es: %d/%d/%d.\n\n",dia,mes,anio);
	} else {
		printf("La fecha es incorrecta.\n\n");
	}
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	return 0;
}
