// CARÁCTERES ESPECIALES

#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main() {
	printf("\t Texto tabulado.\n");
	printf("\nTexto en otra linea.\n");
	printf("\"Texto entre comillas.\"\n");
	printf("\'Texto en comillas simple\'.\n");
	
	printf("Presiona una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
