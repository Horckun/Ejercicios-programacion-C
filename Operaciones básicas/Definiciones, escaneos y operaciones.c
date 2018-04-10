// Definiciones
// Escaneos
// Operaciones

#include <stdio.h>
#define PI 3.1416

int main() {
	float x;
	int y;
	
	x = PI;
	
	printf("El valor de x es: %f",x);
	printf("\n\n");
	printf("Introduce un valor para y: ");
	
	scanf("%i",&y);
	
	printf("\n");
	printf("El valor de y es: %i",y);
	printf("\n\n");
	
	x = x * y;
	
	printf("El nuevo valor de x * y es: %f",x);
	printf("\n\n");
	
	system("pause");
	return 0;
}
