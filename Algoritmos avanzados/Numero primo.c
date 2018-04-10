// Numeros primos

#include <stdio.h>

int main() {
	
	// Comprobar numero
	
	/* int numero,resto,comprobar;
	
	printf("Introduce un numero: ");
	scanf("%i",&numero);
	printf("\n");
	
	resto = 0;
	
	comprobar = numero % 2;
	
	if(comprobar == 0) {
		
		printf("El numero %i no es primo",numero);
		printf("\n\n");
		
	} else {
		
		printf("El numero %i es primo",numero);
		printf("\n\n");
		
	} */
	
	// Solicitar numero
	
	int resto,division,numero,inicio,comprobar;
	
	printf("Introduce un numero: ");
	scanf("%i",&numero);
	printf("\n");
	
	for(inicio = 2; inicio <= numero; inicio++) {
		
		if(inicio % 2 != 0) {
			
			printf("%i, ",inicio);
			
		}
		
	}
	
	printf("\n\n");
	
	system("pause");
	return 0;
	
}
