// Funciones

#include <stdio.h>

#define p printf
#define s scanf

int numeros();

int main() {
	int x,y,comprobar;
	
	p("Introduce un valor: ");
	s("%i",&x);
	p("\n");
	
	p("Ahora introduce otro valor: ");
	s("%i",&y);
	p("\n");
	
	comprobar = numeros(x,y,comprobar);
	
	p("El numero mayor entre %i y %i es: %i",x,y,comprobar);
	p("\n\n");
	
	system("pause");
	return 0;
}

int numeros(int x, int y, int comprobar) {
	if(x > y) {
		comprobar = x;
	} else {
		if(y > x) {
			comprobar = y;
		}
	}
	
	return comprobar;
}
