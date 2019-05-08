// Paso de parámetros por valor

// Librería
#include <stdio.h>

// Otra función
void funcion(int x);

// Función principal
int main() {
	int x;
	
	//Solicitamos valor para pasarlo a otra función
	printf("Introduce un valor: ");
	fflush(stdin);
	scanf("%d",&x);
	printf("\n");
	
	// Llamamos a la función siguiente
	funcion(x);
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
// Pasamos por parámetro el valor solicitado
void funcion(int x) {
	printf("El valor introducido es %d.\n\n",x);
}
