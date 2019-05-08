// Array

// LIBRERÍA
#include <stdio.h>

// FUNCIÓN PRINCIPAL
int main() {
	int i,contar;
	char palabra[10];
	
	contar = 0;
	
	printf("Escribe la primera letra: ");
	fflush(stdin);
	scanf("%c",&palabra[0]);
	if(palabra[0] == 'a' || palabra[0] == 'A') {
		contar++;
	}
	printf("\n");
	printf("Escribe la segunda letra: ");
	fflush(stdin);
	scanf("%c",&palabra[1]);
	if(palabra[1] == 'a' || palabra[1] == 'A') {
		contar++;
	}
	printf("\n");
	printf("Escribe la tercera letra: ");
	fflush(stdin);
	scanf("%c",&palabra[2]);
	if(palabra[2] == 'a' || palabra[2] == 'A') {
		contar++;
	}
	printf("\n");
	printf("Escribe la cuarta letra: ");
	fflush(stdin);
	scanf("%c",&palabra[3]);
	if(palabra[3] == 'a' || palabra[3] == 'A') {
		contar++;
	}
	printf("\n");
	printf("Escribe la quinta letra: ");
	fflush(stdin);
	scanf("%c",&palabra[4]);
	if(palabra[4] == 'a' || palabra[4] == 'A') {
		contar++;
	}
	printf("\n");
	
	printf("Hay %d 'a'.\n",contar);
	
	printf("Presiona una tecla para terminar...");
	getch();
	return 0;
}
