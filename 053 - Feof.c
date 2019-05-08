// Feof

// Librería
#include <stdio.h>

// Función principal
int main() {
	// Archivo *variable
	FILE *archivo;
	// Variable = abrir archivo
	archivo = fopen("archivo.txt","rt");
	// Comprobar si se abre
	if(archivo == NULL) {
		printf("No se ha podido abrir el archivo.\n\n");
	}
	
	char letra;
	// Leer carácter por carácter
	letra = fgetc(archivo);
	while(feof(archivo) == 0) {
		printf("%c",letra);
		letra = fgetc(archivo);
	}
	printf("\n");
	
	// Cerrar archivo
	fclose(archivo);
	
	// Cierre
	printf("Pulsa una tecla para finalizar...");
	fflush(stdin);
	getch();
	return 0;
}
