// MATRICES EN MEMORIA DINÁMICA

#include <stdio.h>
#include <stdlib.h>

#define p printf
#define s scanf

int main() {
	srand(time(NULL));
	int **m1,**m2,filas,columnas,i,j;
	
	filas = rand()%10;
	columnas = rand()%10;
	
	p("Filas: %i.\n",filas);
	p("Columnas: %i.\n\n",columnas);
	
	m1 = (int**)malloc(filas*sizeof(int*));
	if(m1 == NULL) {
		p("No se ha podido reservar espacio en memoria.\n");
		exit(1);
	}
	for(i = 0; i < filas; i++) {
		m1[i] = (int*)malloc(columnas*sizeof(int));
		if(m1[1] == NULL) {
			p("No se ha podido reservar espacio en memoria.\n");
			exit(1);
		}
	}
	for(i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			m1[i][j] = rand()%10;
			p("Fila %i Columna %i: %i.\n",i+1,j+1,m1[i][j]);
		}
		p("\n");
	}
	
	m2 = (int**)malloc(filas*sizeof(int*));
	if(m2 == NULL) {
		p("No se ha podido reservar espacio en memoria.\n");
		exit(1);
	}
	for(i = 0; i < filas; i++) {
		m2[i] = (int*)malloc(columnas*sizeof(int));
		if(m2[1] == NULL) {
			p("No se ha podido reservar espacio en memoria.\n");
			exit(1);
		}
	}
	for(i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			m2[i][j] = m1[i][j];
			p("%i ",m2[i][j]);
		}
		p("\n");
	}
	
	return 0;
}
