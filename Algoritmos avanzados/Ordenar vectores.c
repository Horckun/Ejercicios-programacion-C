// Ordenar vectores

#include <stdio.h>

#define p printf
#define s scanf

void preguntar(int a[]);
void ordenar(int b[]);
void resultado(int c[]);

int main() {
	int v[10];
	
	preguntar(v);
	ordenar(v);
	resultado(v);
	
	return 0;
}
void preguntar(int a[]) {
	int i;
	
	for(i = 0; i < 10; i++) {
		p("Introduce un valor para el vector %i: ",i);
		s("%i",&a[i]);
		p("\n");
	}	
}
void ordenar(int b[]) {
	int i,j,burbuja;
	
	for(i = 0; i < 10; i++) {
		for(j = i; j < 10; j++) {
			if(b[i] > b[j]) {
				burbuja = b[i];
				b[i] = b[j];
				b[j] = burbuja;
			}
		}
	}
}
void resultado(int c[]) {
	int i;
	
	p("El resultado es el siguiente: ");
	
	for(i = 0; i < 10; i++) {
		p("%i, ",c[i]);
	}
	
	p("\n");
}
