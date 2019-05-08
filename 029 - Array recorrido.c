// Array recorrido

// Librería
#include <stdio.h>

// Función principal
int main() {
	// Declaración de variables
	int matriz[5][3],i,j;
	
	// Guardando valores
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 3; j++) {
			printf("Introduce un valor para la columna %d: ",j+1);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	
	// Mostrando valores
	for(i= 0; i < 5; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Pulsa una tecla para terminar...");
	getch();
	return 0;
}
