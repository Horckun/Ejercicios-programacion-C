// WHILE

// LIBRERÍA
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main() {
	int x;
	
	x = 0;
	
	// BUCLE WHILE
	while(x < 11) {
		printf("- %d.\n",x);
		x++;
	}
	
	x = 0;
	
	while(x != 8) {
		printf("Introduce un numero del 1 al 10: ");
		scanf("%d",&x);
	}
	
	printf("Presiona una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
