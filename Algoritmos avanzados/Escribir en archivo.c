// test

#include <stdio.h>

#define p printf
#define s scanf

void cambio(char aux[]);

int main() {
	FILE *archivo;
	
	archivo = fopen("Escribir en archivo.doc","w");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo");
		exit(1);
	}
	
	int n;
	p("Introduce un valor: ");
	fprintf(archivo,"Introduce un valor: ");
	s("%i",&n);
	
	fprintf(archivo,"%i",n);
	
	fclose(archivo);
	
	return 0;
}
void cambio(char aux[]) {
	int i;
	for(i = 0; i < 50; i++) {
		if(aux[i] == '\n') {
			aux[i] = '\0';
		}
	}
}
