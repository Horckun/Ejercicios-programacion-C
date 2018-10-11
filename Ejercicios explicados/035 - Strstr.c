// Strstr

// Librería
#include <stdio.h>

// Función principal
int main() {
	// Variables
	char frase[100],palabra[20];
	int comprobar;
	
	// Pedir frase y palabra
	printf("Escribe una frase: ");
	fflush(stdin);
	gets(frase);
	
	printf("Ahora escribe una palabra: ");
	fflush(stdin);
	gets(palabra);
	
	comprobar = strstr(frase,palabra);
	
	if(comprobar != NULL) {
		printf("Se ha encontrado la palabra.\n");
	} else {
		printf("No se ha encontrado la palabra.\n");
	}
	
	// Cierre
	return 0;
}
