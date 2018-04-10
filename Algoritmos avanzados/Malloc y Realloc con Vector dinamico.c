// Malloc y Realloc con Vector dinamico

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define p printf
#define s scanf

void aleatorio(int *vector);

int main() {
	int i,j,k;
	int N = 10;
	int *vector;
	
	vector = (int*)malloc(N*sizeof(int));
	
	if(vector == NULL) {
		p("No se ha podido seguir con el programa.\n\n");
	} else {
		aleatorio(vector);
		
		for(i = 0; i < N; i++) {
			j= i+1;
			while(j < N) {
				if(*(vector+i) == *(vector+j)) {
					for(k = j; k + 1 < N; k++) {
						*(vector+k) = *(vector+k+1);
					}
					N--;
				}
				else {
					j++;
				}
			}
		}
		vector = (int*)realloc(vector,N*sizeof(int));
		
		if(vector == NULL) {
			p("No se ha podido seguir con el programa.\n\n");
		} else {
			for(i = 0; i < N; i++) {
				p("%i ",*(vector+i));
			}
			p("\n\n");
		}
	}
	
	system("pause");
	return 0;
}
void aleatorio(int *vector) {
	int i;
	
	srand(time(NULL));
	
	for(i = 0; i < 10; i++) {
		*(vector+i) = rand()%3;
		p("%i ",*(vector+i));
	}
	p("\n\n");
}
