// Cadena de carácteres

// Librería
#include <stdio.h>

// Función principal
int main() {
	int i;
	char palabra[10];
	
	printf("Introduce la primera letra de la palabra: ");
	gets(palabra);
	
	printf("%s.\n",palabra);
	
	// Cierre
	printf("Presiona una tecla para terminr...");
	getch();
	return 0;
}
