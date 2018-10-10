// Strlen

// Librerías
#include <stdio.h>

// Función principal
int main() {
	// Variables
	char palabra[20];
	int contar;
	
	// Imprimir
	printf("Introduce una palabra: ");
	fflush(stdin);
	gets(palabra);
	
	// Cálculo
	contar = strlen(palabra);
	
	// Imprimir cálculo
	printf("%s tiene %d letras.\n",palabra,contar);
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
