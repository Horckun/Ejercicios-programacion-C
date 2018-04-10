// Memoria dinamica

#include <stdio.h>
#include <stdlib.h>

#define p printf
#define s scanf

int main() {
	int i,n;
	int *vector;
	
	p("Valor del vector: ");
	s("%i",&n);
	
	vector = (int*)malloc(n*sizeof(int));
	
	if(vector == NULL) {
		p("No se ha podido reservar la memoria.\n\n");
	} else {
		for(i = 0; i < n; i++) {
			*(vector+i) = i+1;
		}
		for(i = 0; i < n; i++) {
			p("%i ",*(vector+i));
		}
		p("\n\n");
		p("Otro valor del vector: ");
		s("%i",&n);
		vector = (int*)malloc(n*sizeof(int));
		if(vector == NULL) {
			p("No se ha podido reservar la memoria.\n\n");
		} else {
			for(i = 0; i < n; i++) {
				*(vector+i) = i+1;
			}
			for(i = 0; i < n; i++) {
				p("%i ",*(vector+i));
			}
			p("\n\n");
		}
	}
	
	system("pause");
	return 0;
}
