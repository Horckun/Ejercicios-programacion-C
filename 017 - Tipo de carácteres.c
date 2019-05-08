// TIPO DE CARÁCTERES

#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main() {
	int entero = 8;
	float real = 2.5;
	char caracter = 'H';
	
	printf("%c\n",caracter); // Tipo caracter
	printf("%d\n",entero); // Tipo entero
	printf("%f\n",real); // Tipo real
	printf("%.2f\n",real); // Tipo real con dos dígitos de precisión
	printf("%10d\n",entero); // Tipo entero con diez dígitos
	printf("%10f\n",real); // Tipo real con diez dígitos
	printf("%p\n",&caracter); // Dirección de memoria de tipo caracter
		
	printf("Presiona una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
