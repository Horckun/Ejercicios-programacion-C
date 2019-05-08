// Función recursiva factorial

// Librería
#include <stdio.h>

// Función secundaria
void factorial(int *n, int *f);

// Función principal
int main() {
	// Variables
	int n,f;
	
	// Pedir número
	printf("Introduce un n%cmero para averiguar su valor factorial: ",163);
	fflush(stdin);
	scanf("%d",&n);
	
	f = 1;
	
	factorial(&n,&f);
	
	// Mostrar factorial
	printf("El factorial de %d es %d.\n\n",n,f);
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
void factorial(int *n, int *f) {
	int i;
	
	printf("\n| ");
	// Calcular factorial
	for(i = 1; i <= *n; i++) {
		*f *= i;
		printf("%d | ",*f);
	}
	printf("\n\n");
}
