// Estructuras anidadas

#include <stdio.h>

int main() {
	
	int h;
	
	printf("Introduce un valor entre 1 y 7: ");
	scanf("%i",&h);
	printf("\n");
	
	if(h==1) {
		
		printf("El numero %i corresponde al Lunes",h);
		printf("\n\n");
		
	} else {
		
		if(h==2) {
			
			printf("El numero %i corresponde al Martes",h);
			printf("\n\n");
			
		} else {
			
			if(h==3) {
				
				printf("El numero %i corresponde al Miercoles",h);
				printf("\n\n");
				
			} else {
				
				if(h==4) {
					
					printf("El numero %i corresponde al Jueves",h);
					printf("\n\n");
					
				} else {
					
					if(h==5) {
						
						printf("El numero %i corresponde al Viernes",h);
						printf("\n\n");
						
					} else {
						
						if(h==6) {
							
							printf("El numero %i corresponde al Sabado",h);
							printf("\n\n");
							
						} else {
							
							if(h==7) {
								
								printf("El numero %i corresponde al Domingo",h);
								printf("\n\n");
								
							} else {
								
								printf("No has elegido un numero de los anteriores citados");
								printf("\n\n");
								
							}
							
						}
						
					}
					
				}
				
			}
			
		}
		
	}
	
	system("pause");
	return 0;
	
}
