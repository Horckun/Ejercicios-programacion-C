// Strcat

// Librerías
#include <stdio.h>

// Función principal
int main() {
	// Declaración
	char cad1[5], cad2[5];
	
	// Copia
	strcpy(cad1, "Horc");
	strcpy(cad2, "kun");
	
	// Juntar cadenas
	strcat(cad1,cad2);
	
	// Impresión
	printf("%s.\n",cad1);
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
