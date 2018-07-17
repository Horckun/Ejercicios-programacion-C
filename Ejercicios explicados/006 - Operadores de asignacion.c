// OPERADORES DE ASIGNACIÓN

// Librerias
#include <stdio.h>
#include <stdlib.h>

// Funcion principal
int main(void) {
	// Dando valores a variables
	int x,y;
	
	x = 8; // A la variable x se le asigna el número 8
	y = 2; // A la variable y se le asigna el número 2
	
	x += 2; // A la variable x (8) se le suma 2, que es igual que "x = x + 2" (8 = 8 + 2). Ahora x vale 10
	y -= 2; // A la variable y (2) se le resta 2, que es igual que "y = y - 2" (2 = 2 - 2). Ahora y vale 0
	
	// Imprimiendo en pantalla los resultados
	printf("x = %i.\n",x);
	printf("y = %i.\n",y);
	
	getchar();
	
	return 0;
}
