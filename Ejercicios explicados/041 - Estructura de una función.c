// Estructura de una función

// Librería
#include <stdio.h>

// Otras funciones
void funcion();

// Función principal
int main() {
	// Llamada a función secundaria
	funcion();
	
	// Cierre
	printf("Pulse una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
// Función secundaria
void funcion() {
	printf("\t================\n");
	printf("\t=              =\n");
	printf("\t= Hello World! =\n");
	printf("\t=              =\n");
	printf("\t================\n\n");
}
