// Strtok

// Librería
#include <stdio.h>

// Función principal
int main() {
	// Variables
	char palabras[300], *p;
	
	// Solicitar palabras por comas
	printf("Introduce varias palabras separadas por comas: ");
	fflush(stdin);
	gets(palabras);
	
	// Obtener primer fragmento
	p = strtok(palabras,",");
	if(p) {
		printf("%s\n",p);
	}
	
	// Encontrar más fragmentos
	while(p = strtok(NULL,",")) {
		printf("%s\n",p);
	}
	
	// Cierre
	return 0;
}
