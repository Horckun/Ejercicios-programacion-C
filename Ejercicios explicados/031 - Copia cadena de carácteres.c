// Copia cadena de carácteres

// Librería
#include <stdio.h>
#include <string.h>

// Función principal
int main() {
	// Declaración variables
	int i;
	char palabra[10], palabra2[10];
	
	// Declaración variables
	printf("Introduce una palabra: ");
	gets(palabra);
	
	// Copia palabra
	strcpy(palabra2,palabra);
	
	// muestra palabra2
	printf("%s.",palabra2);
	
	// Cierre
	return 0;
}
