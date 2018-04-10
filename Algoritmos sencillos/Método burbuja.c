// Método burbuja

#include <stdio.h>

int main() {
	
	int h,o,aux;
	
	printf("Introduce un numero entero: ");
	scanf("%i",&h);
	printf("\n");
	printf("Introduce otro numero entero: ");
	scanf("%i",&o);
	printf("\n");
	
	aux = h;
	h = o;
	o = aux;
	
	printf("El primer valor ahora es: %i",h);
	printf("\n\n");
	printf("Y el segundo valor ahora es: %i",o);
	printf("\n\n");
	
	system("pause");
	return 0;
	
}
