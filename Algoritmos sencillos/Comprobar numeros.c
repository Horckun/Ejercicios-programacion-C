// Comprobar números

#include <stdio.h>

int main() {
	
	int h;
	
	printf("Escribe un numero entero entre 0 y 10: ");
	scanf("%i",&h);
	printf("\n");
	
	if(h<=10 && h>=0) {
		
		printf("El numero %i es correcto",h);
		printf("\n\n");
		
	} else {
		
		printf("El numero %i es incorrecto",h);
		printf("\n\n");
		
	}
	
	system("pause");
	return 0;
	
}
