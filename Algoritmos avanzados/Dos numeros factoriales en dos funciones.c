// Dos numeros factoriales en una funcion

#include <stdio.h>

#define p printf
#define s scanf

int factorial(int a);

int main() {
	int x,y,f1,f2;
	
	p("Introduce un numero para la variable X: ");
	s("%i",&x);
	p("\n");
	
	Sleep(1000);
	
	p("Ahora introduce otro numero para la variable Y: ");
	s("%i",&y);
	p("\n");
	
	f1 = factorial(x);
	f2 = factorial(y);
	
	Sleep(1000);
	
	p("El factorial de %i es: %i",x,f1);
	p("\n\n");
	
	Sleep(1000);
	
	p("Y el factorial de %i es: %i",y,f2);
	p("\n\n");
	
	
	system("pause");
	return 0;
}
int factorial(int a) {
	int i,aux;
	
	aux = 1;
	
	for(i = 1; i <= a; i++) {
		aux *= i;
		p("%i, ",aux);
	}
	
	p("\n\n");
	
	return aux;
}
