// LEER ARCHIVO

#include <stdio.h>
#include <string.h>

#define p printf
#define s scanf

int main() {
	char aux[100];
	
	FILE *fichero;
	
	fichero = fopen("test.txt","r");
	
	while(!feof(fichero)) {
		fgets(aux,100,fichero);
		p("%s",aux);
	}
	
	fclose(fichero);
	
	return 0;
}
