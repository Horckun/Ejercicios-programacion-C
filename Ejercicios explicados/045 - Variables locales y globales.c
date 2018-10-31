// Variables locales y globales

// Librería
#include <stdio.h>

// Variable global
int global;

// Función secundaria
void funcion();

// Función principal
int main() {
	// Variable local
	int local = 8;
	
	// Mostrar en pantalla la variable local
	printf("La variable local tiene como valor: %d.\n\n",local);
	
	// Llamada a la función secundaria
	funcion();
	
	// Mostrar en pantalla la variable global
	printf("La variable global tiene como valor: %d.\n\n",global);
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
void funcion() {
	global = 5;
}
