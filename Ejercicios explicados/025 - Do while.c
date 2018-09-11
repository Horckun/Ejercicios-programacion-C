// DO WHILE

// LIBRERÍA
#include <stdio.h>

int main() {
	// VARIABLE
	int opcion;
	
	// BUCLE
	do {
		printf("Elige una opci%cn:\n\n",162);
		printf("[1] - Continuar.\n");
		printf("[2] - Salir.\n\n");
		printf("Opci%cn: ",162);
		scanf("%d",&opcion);
		printf("\n");
	} while(opcion == 1);
	
	printf("Presiona una tecla para salir...");
	getch();
	return 0;
}
