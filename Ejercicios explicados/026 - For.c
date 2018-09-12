// FOR

// LIBRERÍA
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main() {
	int i;
	
	for(i = 0; i < 11; i++) {
		printf("%d ",i);
	}
	printf("\n");
	
	printf("Pulsa una tecla para salir...");
	fflush(stdin);
	getch();
	return 0;
}
