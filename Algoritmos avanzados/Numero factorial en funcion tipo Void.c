// Factorial en funcion tipo Void

#include <stdio.h>

#define p printf
#define s scanf

void factorial();

int main() {
	
	factorial();
	
	system("pause");
	return 0;
}

void factorial() {
	int x,i,aux;
	
	p("Introduce un numero: ");
	s("%i",&x);
	p("\n");
	
	aux = 1;
	
	for(i = 1; i <= x; i++) {
		aux *= i;
	}
	
	p("Su factorial es: %i",aux);
	p("\n\n");
}
