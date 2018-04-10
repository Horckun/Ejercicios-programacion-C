// Vectores en funciones

#include <stdio.h>

#define p printf
#define s scanf

void vector(int a[]);
void imprimir(int b[]);

int main() {
	int v[2];
	
	vector(v);
	imprimir(v);
	
	return 0;
}
void vector(int a[]) {
	int i;
	
	for(i = 0; i < 2; i++) {
		p("Introduce un valor para el vector %i: ",i);
		s("%i",&a[i]);
		p("\n");
	}
}
void imprimir(int b[]) {
	int i;
	
	p("Los valores introducidos anteriormente son: ");
	
	for(i = 0; i < 2; i++) {
		p("%i, ",b[i]);
	}
	
	p("\n");
}
