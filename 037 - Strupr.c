// Strupr

// Librería
#include <stdio.h>

// Función principal
int main() {
	// Variables
	char palabra[20];
	
	// Insertar palabra
	printf("Introduce una palabra en minúscula: ");
	fflush(stdin);
	gets(palabra);
	
	// Cambio a mayúscula
	strupr(palabra);
	
	// Imprimir palabra
	printf("%s",palabra);
	
	// Cierre
	return 0;
}
