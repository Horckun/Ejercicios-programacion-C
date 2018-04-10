// Switch

#include <stdio.h>

int main() {
	
	int h;
	
	printf("Elije un valor entre 1 y 7: ");
	scanf("%i",&h);
	printf("\n");
	
	switch(h) {
		
		case 1:
			printf("Lunes");
			printf("\n\n");
			break;
			
		case 2:
			printf("Martes");
			printf("\n\n");
			break;
			
		case 3:
			printf("Miercoles");
			printf("\n\n");
			break;
			
		case 4:
			printf("Jueves");
			printf("\n\n");
			break;
			
		case 5:
			printf("Viernes");
			printf("\n\n");
			break;
			
		case 6:
			printf("Sabado");
			printf("\n\n");
			break;
			
		case 7:
			printf("Domingo");
			printf("\n\n");
			break;
			
		default:
			
			printf("No has introducido ningun valor correcto.\n\n");
		
	}
	
	system("pause");
	return 0;
	
}
