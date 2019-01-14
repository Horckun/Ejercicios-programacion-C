// Método de selección directa

// Librerías
#include <stdio.h>

// Función principal
int main() {
	// Declarar variables
	int i,j,aux,v[5] = {23,456,213,567,1234};
	
	// Buscar y reemplazar
	for(i = 0; i < 5; i++) {
		for(j = i+1; j < 4; j++) {
			if(v[i] > v[j]) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	// Mostrar array
	for(i = 0; i < 5; i++) {
		printf("%d\n",v[i]);
	}
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
