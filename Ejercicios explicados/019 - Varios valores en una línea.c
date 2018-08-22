// VARIOS VALORES EN UNA LÍNEA

#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main() {
	int numero = 72;
	
	printf("%d, %c, %o, %x y %.2f\n",numero,numero,numero,numero,numero); // Tipo entero en varias líneas
	
	printf("Presiona una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
