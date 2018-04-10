// Intercambiar valores por puntero en funciones

#include <stdio.h>

#define p printf
#define s scanf

void cambio(int *a, int *b);

int main() {
	int x,y;
	
	p("Introduce un valor para X: ");
	s("%i",&x);
	p("\n");
	
	p("Ahora introduce un valor para Y: ");
	s("%i",&y);
	p("\n");
	
	cambio(&x, &y);
	
	p("Ahora X vale %i e Y vale %i",x,y);
	p("\n");
	
	return 0;
}
void cambio(int *a, int *b) {
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}
