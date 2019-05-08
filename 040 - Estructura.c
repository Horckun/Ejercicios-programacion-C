// Estructura

// Librería
#include <stdio.h>

// Estructura
struct info {
	char nombre[20];
	int edad;
} ficha;

// Función principal
int main() {
	// Pedimos nombre y edad
	printf("Introduce el nombre: ");
	fflush(stdin);
	gets(ficha.nombre);
	printf("Ahora introduce la edad: ");
	scanf("%d",&ficha.edad);
	printf("\n");
	
	// Mostramos nombre y edad
	printf("Nombre: %s.\n",ficha.nombre);
	printf("Edad: %d a%cos.\n\n",ficha.edad,164);
	
	// Cierre
	return 0;
}
