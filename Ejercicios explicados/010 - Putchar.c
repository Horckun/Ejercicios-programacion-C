// PUTCHAR
#include <stdio.h>

int main() {
	// Declaramos variables
	char letra = 'K';
	
	// Mostramos en pantalla lo siguiente
	putchar('H');
	putchar(letra);
	
	// Pausamos el programa
	fflush(stdin);
	printf("\nPulsa Intro para finalizar.");
	
	getchar();
}
