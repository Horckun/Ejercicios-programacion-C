// OPERADORES DE INCREMENTO Y DECREMENTO

// Librerias
#include <stdio.h>
#include <stdlib.h>

// Funcion principal
int main(void) {
	// Dando valores a variables
	int x,y;
	
	x = 8; // A la variable x se le asigna el número 8
	y = 2; // A la variable y se le asigna el número 2
	
	x++; // A la variable x (8) se le suma 1, que es igual que "x = x + 1" (8 = 8 + 1). Ahora x vale 9
	y--; // A la variable y (2) se le resta 1, que es igual que "y = y - 1" (2 = 2 - 1). Ahora y vale 1
	
	// Imprimiendo en pantalla los resultados
	printf("x = %i.\n",x);
	printf("y = %i.\n",y);
	
	++x; // Ahora a la variable x (9) se le suma 1 antes de utilizar la variable
	--y; // Ahora a la variable y (1) se le resta 1 antes de utilizar la variable
	
	// Imprimiendo en pantalla los resultados
	printf("x = %i.\n",x);
	printf("y = %i.\n",y);
	
	getchar();
	
	return 0;
}
