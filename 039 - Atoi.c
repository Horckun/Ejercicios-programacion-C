// Atoi

// Librería
#include <stdio.h>
#include <stdlib.h>

// Función principal
int main() {
	// Variable
	char cadena1[5],cadena2[5];
	int cad1,cad2,cads;
	
	// Pedir número y almacenar en cadena
	printf("Introduce un n%cmero: ",163);
	fflush(stdin);
	gets(cadena1);
	
	printf("Introduce otro n%cmero: ",163);
	fflush(stdin);
	gets(cadena2);
	
	// Transformar cadena en número
	
	cad1 = atoi(cadena1);
	cad2 = atoi(cadena2);
	cads = cad1 + cad2;
	
	// Mostrar resultado
	
	printf("%d + %d = %d.\n",cad1,cad2,cads);
	
	// Cierre
	return 0;
}
