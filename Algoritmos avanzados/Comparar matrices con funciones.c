// COMPARAR MATRICES

#include <stdio.h>
#include <stdlib.h>

#define p printf
#define s scanf

int reservar(int fil, int col);
int introducir(int fil, int col);
void comparar(int filas, int columnas, int **m1, int **m2);

int main() {
	srand(time(NULL));
	int **m1,**m2,filas,columnas,i,j;
	
	filas = rand()%10;
	columnas = rand()%10;
	
	p("Filas: %i.\n",filas);
	p("Columnas: %i.\n\n",columnas);
	
	m1 = reservar(filas,columnas);
	m2 = reservar(filas,columnas);
	
	m1 = introducir(filas,columnas);
	m2 = introducir(filas,columnas);
	
	comparar(filas,columnas,m1,m2);
	
	return 0;
}
int reservar(int fil, int col) {
	int **matriz,i;
	
	matriz = (int**)malloc(fil*sizeof(int*));
	if(matriz == NULL) {
		p("No se ha podido reservar un espacio en memoria.\n");
		exit(1);
	}
	for(i = 0; i < fil; i++) {
		matriz[i] = (int*)malloc(col*sizeof(int));
		if(matriz[i] == NULL) {
			p("No se ha podido reservar un espacio en memoria.\n");
			exit(1);
		}
	}
}
int introducir(int fil, int col) {
	srand(time(NULL));
	int i,j,**matriz;
	
	for(i = 0; i < fil; i++) {
		for(j = 0; j < col; j++) {
			matriz[i][j] = rand()%10;
			p("[%i]",matriz[i][j]);
		}
		p("\n");
	}
	p("\n");
	
	return matriz;
}
void comparar(int filas, int columnas, int **m1, int **m2) {
	int i,j,aux;
	
	aux = 0;
	
	for(i = 0; i < filas && aux == 0; i++) {
		for(j = 0; j < columnas && aux == 0; j++) {
			if(m1[i][j] == m2[i][j]) {
				aux = 1;
			}
		}
	}
	
	if(aux == 1) {
		p("Son iguales.\n");
	} else {
		p("Son diferentes.\n");
	}
}
