// Fgets

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
	
	char lectura;
	char cadena[250];
	// Leer string por carácter hasta 250
	lectura = fgets(cadena,250,archivo);
	while(lectura != NULL) {
		printf("%s",cadena);
		lectura = fgets(cadena,250,archivo);
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
