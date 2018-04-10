// Comparacion matrices

#include <stdio.h>

#define p printf
#define s scanf

void insertar(int maz1[][8], int maz2[][8]);
void leer(int maz1[][8], int maz2[][8]);

int main() {
	int maz1[2][8];
	int maz2[2][8];
	
	insertar(maz1,maz2);
	leer(maz1,maz2);
	
	system("pause");
	return 0;
}
void insertar(int maz1[][8], int maz2[][8]) {
	int i,j;
	
	srand(time(NULL));
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 8; j++) {
			maz1[i][j] = rand()%16;
			maz2[i][j] = rand()%16;
		}
	}
}
void leer(int maz1[][8], int maz2[][8]) {
	int i,j,k,l;
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 8; j++) {
			p("%i ",maz1[i][j]);
		}
		p("\n");
	}
	
	p("\n");
	
	for(k = 0; k < 2; k++) {
		for(l = 0; l < 8; l++) {
			p("%i ",maz2[k][l]);
		}
		p("\n");
	}
	
	p("\n");
	
	if(maz1[i][j] == maz2[k][l]) {
		p("Ambas matrices son iguales\n\n");
	}
}
