// Calcular numero factorial

#include <stdio.h>

int main() {
	
	int h,f,i;
	
	f = 1;
	
	do {
		
		printf("Introduce un numero entero positivo: ");
		scanf("%i",&h);
		printf("\n");
		
	} while(h <= 0);
	
	if(h > 0) {
		
		for(i = 1; i <= h; i++) {
			
				f = f * i;
			
		}
		
		printf("El numero factorial de %i es %i",h,f);
		printf("\n\n");
		
	} else {
		
		printf("No se ha seguido las instrucciones");
		printf("\n\n");
		
	}
	
	system("pause");
	return 0;
	
}
