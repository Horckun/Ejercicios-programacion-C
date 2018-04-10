// Arrays

#include <stdio.h>

#define p printf
#define s scanf

int main() {
	int x[10];
	int y[10];
	int i;
	int j;
	
	for(i = 0; i < 10; i++) {
		p("Introduce un valor para el vector %i: ",i);
		s("%i",&y[i]);
		p("\n");
	}
	
	for(i = 0; i < 10; i++) {
		p("El valor introducido es: %i",y[i]);
		p("\n\n");
	}
	
	system("pause");
	return 0;
}
