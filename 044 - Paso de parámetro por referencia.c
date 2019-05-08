// Paso de parámetro por referencia

// Librería
#include <stdio.h>

// Otras funciones
void cambiar(int *num);

// Función principal
int main() {
	// Variables
	int x;
	
	// Pedir valor para x
	printf("Introduce un valor para la variable x: ");
	fflush(stdin);
	scanf("%d",&x);
	printf("\n");
	
	// Mostrar valor de x
	printf("Has introducido el valor %d.\n\n",x);
	
	// Llamada a función cambiar
	cambiar(&x);
	
	// Volver a mostrar valor de x + 1
	printf("Ahora x tiene como valor %d.\n\n",x);
	
	// Cierre
	printf("Pulse una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
void cambiar(int *num) {
	// Sumamos 1 a x
	*num = *num + 1;
}
