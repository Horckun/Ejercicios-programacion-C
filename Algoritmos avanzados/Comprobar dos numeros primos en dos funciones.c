// Comprobacion de numeros primos en funciones

#include <stdio.h>

#define p printf
#define s scanf

int primo(int a);

int main() {
	int x,y,p1,p2;
	
	p("Introduce un numero para X: ");
	s("%i",&x);
	p("\n");
	
	
	p("Ahora introduce un numero para Y: ");
	s("%i",&y);
	p("\n");
	
	
	p1 = primo(x);
	p2 = primo(y);
	
	if(p1 == 0) {
		p("El numero %i es primo",x);
	} else {
		p("El numero %i no es primo",x);
	}
	
	p("\n\n");
	
	if(p2 == 0) {
		p("El numero %i es primo",y);
	} else {
		p("El numero %i no es primo",y);
	}
		
	p("\n\n");
	
	system("pause");
	return 0;
}

int primo(int a) {
	int i,aux,r;
	
	aux = 0;
	
	for(i = 2; i < a && aux == 0; i++) {
		r = a % i;
		if(r == 0) {
			aux = 1;
		}
	}
	
	return aux;
}
