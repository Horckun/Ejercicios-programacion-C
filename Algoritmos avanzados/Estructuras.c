// Estructuras

#include <stdio.h>
#include <string.h>

#define p printf
#define s scanf

typedef struct {
	int paginas;
	char nombre[50];
	float precio;
}libro;

int main() {
	libro JT[10];
	
	int i;
	
	for(i = 0; i < 10; i++) {
		JT[i].precio = 25 + i;
		p("El precio de la estructura %i es %f\n",i+1,JT[i].precio);
	}
	
	system("pause");
	return 0;
}
