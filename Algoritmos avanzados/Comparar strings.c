// Comparar strings

#include <stdio.h>
#include <string.h>

#define p printf
#define s scanf

int main() {
	char frase1[100];
	char frase2[100];
	
	p("Introduce la primera frase: ");
	fgets(frase1,100,stdin);
	p("\n");
	
	p("Ahora introduce la segunda frase: ");
	fflush(stdin);
	fgets(frase2,100,stdin);
	p("\n");
	
	if(strcmp(frase1,frase2) == 0) {
		p("Ambas frases son iguales.\n\n");
	}
	
	system("pause");
	return 0;
}
