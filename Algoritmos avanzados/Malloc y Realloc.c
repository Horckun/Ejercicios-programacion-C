// MALLOC Y REALLOC

#include <stdio.h>
#include <stdlib.h>

#define p printf
#define s scanf

int main() {
	srand(time(NULL));
	int n,a,*v,i,j,k;
	
	n = 10;
	v = (int*)malloc(n*sizeof(int));
	if(v == NULL) {
		p("No se ha podido asignar un espacio al vector.\n");
	} else {
		for(i = 0; i < n; i++) {
			a = rand()%10;
			*(v + i) = a;
			p("%i ",*(v + i));
		}
		p("\n");
		for(i = 0; i < n; i++) {
			j = i + 1;
			while(j < n) {
				if(*(v + i) == *(v + j)) {
					for(k = j; k + 1 < n; k++) {
						*(v + k) = *(v + k + 1);
					}
					n--;
				} else {
					j++;
				}
			}
		}
		v = (int*)realloc(v,n*sizeof(int));
		if(v == NULL) {
			p("No se ha podido redimensionar el tamaño del vector.\n");
		} else {
			for(i = 0; i < n; i++) {
				p("%i ",*(v + i));
			}
		}
	}
	
	return 0;
}
