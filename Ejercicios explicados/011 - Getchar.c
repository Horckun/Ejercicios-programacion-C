// GETCHAR

#include <stdio.h>

int main() {
	char letra;
	
	// Obtenemos un caracter por teclado y lo mostramos
	letra = getchar();
	putchar(letra);
	
	// Hacemos una pausa hasta que el usuario presione Intro
	fflush(stdin);
	printf("\nPresiona Intro para terminar...");	
	getchar();
	
	return 0;
}
