// Probabilidades de que salga un numero de un dado

#include <stdio.h>

#define p printf
#define s scanf

void probabilidad(int *vector);
void leer(int *vector);

int main() {
	int vector[] = {0,0,0,0,0,0};
	
	probabilidad(vector);
	leer(vector);
	
	system("pause");
	return 0;
}
void probabilidad(int *vector) {
	srand(time(NULL));
	
	int i,a;
	
	for(i = 0; i < 10000; i++) {
		a = rand()%6;
		
		switch (a) {
			case 0: {
				*(vector+a) += 1;
				
				break;
			}
			case 1: {
				*(vector+a) += 1;
				
				break;
			}
			case 2: {
				*(vector+a) += 1;
				
				break;
			}
			case 3: {
				*(vector+a) += 1;
				
				break;
			}
			case 4: {
				*(vector+a) += 1;
				
				break;
			}
			case 5: {
				*(vector+a) += 1;
				
				break;
			}
		}
	}
}
void leer(int *vector) {
	int i;
	float x;
	
	for(i = 0; i < 6; i++) {
		x = (*(vector+i) *100) / 10000.;
		p("La probabilidad de que el numero %i salga es: %f",i+1,x);
		p("\n");
	}
	
	p("\n");
}
