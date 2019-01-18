// Eliminar espacios innecesarios de una cadena

// Librerías
#include <stdio.h>
#include <string.h>

// Función principal
int main() {
	char frase[200];
	int i,j,c;
	
	strcpy(frase," alsdkf   lasdfk jsdf  sdlf dkf j ldsk fj       ");
	
	for(i = 0; i < strlen(frase); i++) {
		if(frase[i] == ' ') {
		} else {
			printf("%c",frase[i]);
		}
	}
	
	printf("\n");
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	getch();
	return 0;
}
