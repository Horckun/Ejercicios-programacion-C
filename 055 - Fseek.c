// Fseek

// Librería
#include <stdio.h>

// Estructuras
struct ficha {
	char nombre[50];
};

// Función principal
int main() {
	// Archivo *variable
	FILE *archivo;
	
	struct ficha usuario;
	
	// Variable = abrir archivo
	archivo = fopen("archivo.txt","rt");
	// Comprobar si se abre
	if(archivo == NULL) {
		printf("No se ha podido abrir el archivo.\n\n");
	}
	
	fseek(archivo,1*sizeof(struct ficha),SEEK_SET);
	fread(&usuario,sizeof(struct ficha),2,archivo);
	printf("%s", usuario.nombre);
	fread(&usuario,sizeof(usuario),1,archivo);
	
	printf("\n");
	
	// Cerrar archivo
	fclose(archivo);
	
	// Cierre
	printf("Pulsa una tecla para finalizar...");
	fflush(stdin);
	getch();
	return 0;
}
