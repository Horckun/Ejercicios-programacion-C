// Contar palabras de una cadena

// Librerías
#include <stdio.h>
#include <string.h>

// Función principal
int main() {
	// Declaramos variables
	char cadena[100] = "Pero no hay queja del que deja y no se enoja por las tejas que caen del tejado agotadas por viejas";
	int contar, i, tamano;
	
	// Asignamos valores a variables
	tamano = strlen(cadena);	
	contar = 0;
	
	// Contamos palabras
	for(i = 0; i < strlen(cadena); i++) {
		if(cadena[i] == ' ') {
			contar++;
		}
	}
	
	// Mostramos en pantalla
	printf("Frase: %s.\n",cadena); 
	printf("Total de car%cteres: %d.\n",160,tamano);
	printf("Espacios: %d.\n\n",contar);
	
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
