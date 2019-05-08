// ASCII

#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main() {
	char caracter = 'H';
	int numero = 72;
	int numero2 = 8;
	
	printf("%d\n",caracter); // Tipo caracter mostrando número ASCII
	printf("%c\n",numero); // Tipo entero mostrando letra ASCII
	printf("%o\n",numero2); // Tipo entero mostrando octal
	printf("%x\n",numero2); // Tipo entero mostrando hexadecimal
	printf("%.2f\n",numero2); // Tipo entero mostrando real
		
	printf("Presiona una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
