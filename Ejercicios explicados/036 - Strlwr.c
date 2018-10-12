// Strlwr

// Librería
#include <stdio.h>

// Función principal
int main() {
	// Variables
	char palabra[20];
	
	// Pedir palabra
	printf("Escribe una palabra en may%csculas: ",163);
	fflush(stdin);
	gets(palabra);
	
	// Cambio a minúscula
	strlwr(palabra);
	
	// Mostrar cambio
	printf("%s",palabra);
	
	// Cierre
	return 0;
}
