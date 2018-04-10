// Vectores con punteros

#include <stdio.h>

#define p printf
#define s scanf

void preguntar(int *pr);
void leer(int *l);

int main() {
	int vector[3];
	
	preguntar(vector);
	leer(vector);
	
	system("pause");
	return 0;
}
void preguntar(int *pr) {
	int i;
	
	for(i = 0; i < 3; i++) {
		p("Introduce un numero para el vector %i: ",i+1);
		s("%i",(pr+i));
		p("\n");
	}
}
void leer(int *l) {
	int i;
	
	p("Los numeros son: ");
	
	for(i = 0; i < 3; i++) {
		p("%i, ",*(l+i));
	}
	
	p("\n\n");
}
