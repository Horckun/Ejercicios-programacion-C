// Método de búsqueda secuencial

// Librerías
#include <stdio.h>

// Función principal
int main() {
	// Declaración de variables
	int i,n,e = 0,v[5] = {2,34,987,8,1234};
	
	// Solicitar número a buscar
	printf("Introduce un n%cmero a buscar: ",163);
	fflush(stdin);
	scanf("%d",&n);
	
	// Recorrer bucle
	for(i = 0; i < 5; i++) {
		// Buscar número
		if(v[i] == n) {
			e = 1;
		}
	}
	
	// Mostrar en pantalla resultado
	if(e == 1) {
		printf("El n%cmero %d est%c en el array.\n\n",163,n,160);
	} else {
		printf("El n%cmero %d no est%c en el array.\n\n",163,n,160);
	}
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
