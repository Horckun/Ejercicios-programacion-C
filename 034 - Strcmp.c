// Strcmp

// Librería
#include <stdio.h>

// Función principal
int main() {
	// Variables
	char palabra1[20],palabra2[20];
	int comparar;
	
	// Pedir palabras
	printf("Introduce la primera palabra: ");
	fflush(stdin);
	gets(palabra1);
	printf("Ahora introduce la segunda palabra: ");
	fflush(stdin);
	gets(palabra2);
	
	// Comparar
	comparar = strcmp(palabra1,palabra2);
	
	// Mostrar resultado
	if(comparar != 0) {
		printf("Las palabras son diferentes.\n");
	} else {
		printf("Las palabras son iguales.\n");
	}
	
	// Cierre
	return 0;
}
