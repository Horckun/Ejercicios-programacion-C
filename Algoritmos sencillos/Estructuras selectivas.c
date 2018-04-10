// Estructuras selectivas

#include <stdio.h>

int main() {
	
	int h;
	
	printf("Introduce un numero entero: ");
	scanf("%i",&h);
	printf("\n");
	
	if(h == 8) {
		
		printf("Has introducido el valor 8");
		printf("\n\n");
		
	} else {
		
		if(h < 8) {
			
			printf("El valor introducido es menor a 8");
			printf("\n\n");
			
		} else {
			
			if(h > 8) {
				
				printf("El valor introducido es mayor a 8");
				printf("\n\n");
				
			} else {
				
				printf("Error al introducir un numero entero");
				printf("\n\n");
				
			}
			
		}
		
	}
	
	system("pause");
	return 0;
	
}
