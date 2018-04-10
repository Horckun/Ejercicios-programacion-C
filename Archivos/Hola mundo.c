// Hola mundo

#include <stdio.h>

#define p printf
#define s scanf

int main () {
	FILE *archivo;
	archivo = fopen("hola mundo.txt","w");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo.\n");
		exit(1);
	}
	fprintf(archivo,"          =====================\n");
	fprintf(archivo,"          =                   =\n");
	fprintf(archivo,"          =    ==       ==    =\n");
	fprintf(archivo,"          =    ==       ==    =\n");
	fprintf(archivo,"          =    ==       ==    =\n");
	fprintf(archivo,"          =    ===========    =\n");
	fprintf(archivo,"          =    ==       ==    =\n");
	fprintf(archivo,"          =    ==       ==    =\n");
	fprintf(archivo,"          =    ==       ==    =\n");
	fprintf(archivo,"          =                   =\n");
	fprintf(archivo,"          =====================\n");
	
	fclose(archivo);
	
	return 0;
}
