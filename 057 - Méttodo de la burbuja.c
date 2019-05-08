// Méttodo de la burbuja

// Librerías
#include <stdio.h>

// Función principal
int main() {
	// Declaración de variables
	int vector[4] = {2, 4, 1, 3};
	int i, j, aux;
	
	// Ordenar array
	for(i = 0; i < 4; i++) {
		for(j = i+1; j < 4; j++) {
			if(vector[i] > vector[j]) {
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
		}
	}
	
	// Mostrar array
	for(i = 0; i <= 3; i++) {
		printf("\t- %d\n",vector[i]);
	}
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
