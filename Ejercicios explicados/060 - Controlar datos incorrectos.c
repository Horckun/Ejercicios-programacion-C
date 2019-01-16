// Controlar datos incorrectos

// Librerías
#include <stdio.h>


// Función principal
int main() {
	int edad;
	
	do {
		// Solicitamos edad
		printf("Introduce tu edad: ");
		fflush(stdin);
		scanf("%d",&edad);
		printf("\n");
		
		if(edad < 0 || edad > 120) {
			printf("El valor indicado no es el correcto.\n\n");
		}
	} while(edad < 0 || edad > 120);
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
