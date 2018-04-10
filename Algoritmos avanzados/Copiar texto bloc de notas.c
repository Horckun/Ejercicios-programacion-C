// test

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define p printf
#define s scanf

typedef struct {
	char *nombre;
	int edad;
}trabajador;

trabajador *trabajadores;

void vaciar(char lineas[]);
void copiar(char lineas[], int i);

int main() {
	FILE *archivo;
	archivo = fopen("Copiar texto bloc de notas.txt","r");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo.\n");
		exit(1);
	} else {
		p("El archivo se ha abierto.\n");
	}
	
	int contar = 0;
	char lineas[50];
	while(!feof(archivo)) {
		fgets(lineas,50,archivo);
		contar++;
	}
	rewind(archivo);
	p("Hay %i trabajadores en el departamento de informatica.\n",contar);
	
	trabajadores = (trabajador*)malloc(contar*sizeof(trabajador));
	if(trabajadores == NULL) {
		p("No se ha podido asignar un espacio en memoria para los trabajadores.\n");
		exit(1);
	} else {
		p("Se ha asignado un espacio en memoria para los trabajadores.\n\n");
	}
	
	int i,j;
	char aux;
	for(i = 0; !feof(archivo); i++) {
		vaciar(lineas);
		p("Se ha vaciado la linea %i.\n",i+1);
		aux = '0';
		for(j = 0; aux != '-'; j++) {
			aux = fgetc(archivo);
			if(aux != '-') {
				lineas[j] = aux;
			}
		}
		copiar(lineas,i);
		p("Se ha copiado el trabajador %i.\n",i+1);
		fgets(lineas,50,archivo);
		trabajadores[i].edad = atoi(lineas);
		p("%s %i\n\n",trabajadores[i].nombre,trabajadores[i].edad);
	}
	
	return 0;
}
void vaciar(char lineas[]) {
	int i;
	for(i = 0; i < 50; i++) {
		lineas[i] = '\0';
	}
}
void copiar(char lineas[], int i) {
	int N = strlen(lineas) + 1;
	trabajadores[i].nombre = (char*)malloc(N*sizeof(char));
	if(trabajadores[i].nombre == NULL) {
		p("No se ha podido asignar un espacio en memoria para la copia de los trabajadores.\n");
		exit(1);
	}
	strcpy(trabajadores[i].nombre,lineas);
}
