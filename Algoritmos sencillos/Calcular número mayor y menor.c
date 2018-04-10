// Comparación de números

#include <stdio.h>

int main() {
	
	int h,o,r;
	
	printf("Introduce el primer valor: ");
	scanf("%i",&h);
	printf("\n");
	printf("Introduce el segundo valor: ");
	scanf("%i",&o);
	printf("\n");
	printf("Introduce el tercer valor: ");
	scanf("%i",&r);
	printf("\n");
	
	// Menor
	
	if(h < o && h < r) {
		
		printf("El numero %i es el menor de los tres",h);
		printf("\n\n");
		
	}
	
	if(o < h && o < r) {
		
		printf("El numero %i es el menor de los tres",o);
		printf("\n\n");
		
	}
	
	if(r < h && r < o) {
		
		printf("El numero %i es el menor de los tres",r);
		printf("\n\n");
		
	}
	
	// Mayor
	
	if(h > o && h > r) {
		
		printf("El numero %i es el mayor de los tres",h);
		printf("\n\n");
		
	}
	
	if(o > h && o > r) {
		
		printf("El numero %i es el mayor de los tres",o);
		printf("\n\n");
		
	}
	
	if(r > h && r > o) {
		
		printf("El numero %i es el mayor de los tres",r);
		printf("\n\n");
		
	}
	
	// Igual
	
	if(h == o && h == r) {
		
		printf("Dos numeros son iguales");
		printf("\n\n");
		
	}
	
	if(o == h && o == r) {
		
		printf("Dos numeros son iguales");
		printf("\n\n");
		
	}
	
	if(r == h && r == o) {
		
		printf("Dos numeros son iguales");
		printf("\n\n");
		
	}
	
	system("pause");
	return 0;
	
}
