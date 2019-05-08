// SWITCH

// LIBRERÍA
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main() {
	char vocal;
	
	printf("Introduce una vocal: ");
	fflush(stdin);
	scanf("%c",&vocal);
	
	switch(vocal) {
		case 'a': {
			printf("Has pulsado la tecla 'a'.\n");
			break;
		}
		case 'e': {
			printf("Has pulsado la tecla 'e'.\n");
			break;
		}
		case 'i': {
			printf("Has pulsado la tecla 'i'.\n");
			break;
		}
		case 'o': {
			printf("Has pulsado la tecla 'o'.\n");
			break;
		}
		case 'u': {
			printf("Has pulsado la tecla 'u'.\n");
			break;
		}
		default: {
			printf("No has introducido ninguna vocal.\n");
			break;
		}
	}
	
	printf("Presiona una tecla para finalizar...");
	getch();
	return 0;
}
