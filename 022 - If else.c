// IF ELSE

// LIBRERÍA
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main() {
	// DECLARAR VARIABLE
	int x;
	
	// SOLICITAR NÚMERO
	printf("Inserta un valor: ");
	fflush(stdin);
	scanf("%d",&x);
	
	// CONDICIONAL IF
	if(x >= 0) {
		printf("El valor es positivo.\n");
	} else {
		printf("El valor es negativo.\n");
	}
	
	if(x >= 0 && x <= 9) {
		printf("El valor tiene un digito.\n");
	} else {
		printf("El valor tiene mas de un digito.\n");
	}
	
	// CIERRE
	printf("Pulsa una tecla para terminar...");
	getch();
	return 0;
}
