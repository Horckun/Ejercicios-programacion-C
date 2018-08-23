// SCANF

// LIBRERÍA
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main() {
	// DECLARAMOS VARIABLE
	int x;
	
	// MOSTRAMOS EN PANTALLA	
	printf("Da un valor a la variable x: ");
	fflush(stdin);
	scanf("%d",&x);
	printf("x = %d.\n",x);
	
	// CIERRE
	printf("Presiona una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
