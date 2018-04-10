// NECESITO UN VECTOR DE 100 NÚMEROS COMPRENDIDOS ENTRE 0 Y 2 DE MANERA ALEATORIA Y QUE MUESTRE CUÁNTAS VECES SALE EL 0, 1 Y 2.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define p printf
#define s scanf

void aleatorio(int vector[100], int numeros);

int main() {
	int vector[100],*vec_di,i,contar;
	
	aleatorio(vector,100);
	
	vec_di = (int*)calloc(5,sizeof(int));
	if(vec_di == NULL) {
		p("No se ha podido asignar un espacio en memoria.\n");
	} else {
		for(i = 0; i < 5; i++) {
			p("%i ",*(vec_di + i));
		}
		p("\n\n");
		for(i = 0; i < 100; i++) {
			contar = vector[i];
			*(vec_di + contar) += 1;
		}
		for(i = 0; i < 5; i++) {
			p("%i ",*(vec_di + i));
		}
		p("\n\n");
	}
	
	free(vec_di);
	
	return 0;
}
void aleatorio(int vector[100], int numeros) {
	srand(time(NULL));
	
	int i,a;
	
	for(i = 0; i < numeros; i++) {
		a = rand()%5;
		vector[i] = a;
		p("%i ",vector[i]);
	}
	p("\n\n");
}
