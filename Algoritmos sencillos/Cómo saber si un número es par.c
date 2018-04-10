// Cómo saber si un numero es par

#include <stdio.h>

int main() {
	
	int h;
	
	printf("Introduce un valor numerico entero para comprobar si es par o impar: ");
	scanf("%i",&h);
	printf("\n");
	
	h = h % 2;
	
	if(h == 0) {
		
		printf("El numero que has introducido es par");
		printf("\n\n");
		
	} else {
		
		printf("El numero que has introducido es impar");
		printf("\n\n");
		
	}
	
	system("pause");
	return 0;
	
}
