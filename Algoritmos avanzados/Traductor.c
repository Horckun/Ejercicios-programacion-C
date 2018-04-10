// traductor

#include <stdio.h>
#include <string.h>

#define p printf
#define s scanf

typedef struct {
	char en[50];
	char es[50];
	int lleno;
}traductor;

traductor palabras[50];

void introducir();
void buscar();
void vaciar();
void cambio(char palabras[50]);
void traducir(int opcion);

int main() {
	int opcion;
	
	vaciar();
	
	do {
		do {
			p("Elige una opci%cn:\n",162);
			p("=================\n\n");
			p("[1] - Introducir palabras.\n");
			p("[2] - Buscar palabras.\n\n");
			p("Opci%cn: ",162);
			fflush(stdin);
			s("%i",&opcion);
			p("\n");
			
			switch(opcion) {
				case 1: {
					introducir();
					break;
				}
				case 2: {
					buscar();
					break;
				}
			}
		} while(opcion < 1 || opcion > 2);
		p("Elige una opci%cn:\n",162);
		p("=================\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir.\n\n");
		p("Opci%cn: ",162);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
	} while(opcion == 1);
	
	return 0;
}
void introducir() {
	int i,aux;
	
	aux = 0;
	
	for(i = 0; i < 50 && aux == 0; i++) {
		if(palabras[i].lleno == 0) {
			p("Introduce una palabra en espa%col: ",164);
			fflush(stdin);
			fgets(palabras[i].es,50,stdin);
			cambio(palabras[i].es);
			p("Ahora introduce la traducci%cn en ingl%cs: ",162,130);
			fflush(stdin);
			fgets(palabras[i].en,50,stdin);
			cambio(palabras[i].en);
			palabras[i].lleno = 1;
			aux = 1;
			p("\n");
			p("%s y %s a%cadidos.\n\n",palabras[i].es,palabras[i].en,164);
			p("%i palabras a%cadidas.\n\n",i+1,164);
		}
	}
}
void buscar() {
	int opcion;
	
	do {
		p("Elige una opci%cn:\n",162);
		p("=================\n\n");
		p("[1] - Ingl%cs | Espa%col.\n",130,164);
		p("[2] - Espa%col | Ingl%cs.\n\n",164,130);
		p("Opci%cn: ",162);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		switch(opcion) {
			case 1: {
				traducir(opcion);
				break;
			}
			case 2: {
				traducir(opcion);
				break;
			}
		}
	} while(opcion < 1 || opcion > 2);
}
void vaciar() {	
	int i;
	
	for(i = 0; i < 50; i++) {
		palabras[i].lleno = 0;
	}
}
void cambio(char palabras[50]) {
	int i;
	
	for(i = 0; i < 50; i++) {
		if(palabras[i] == '\n') {
			palabras[i] = '\0';
		}
	}
}
void traducir(int opcion) {
	char palabra[50];
	int i,aux,cmp;
	
	aux = 0;
	
	p("Introduce la palabra a traducirs: ");
	fflush(stdin);
	fgets(palabra,50,stdin);
	cambio(palabra);
	p("\n");
	p("Buscando la palabra %s...\n\n",palabra);
	Sleep(2000);
	
	if(opcion == 1) {
		for(i = 0; i < 50 && aux == 0; i++) {
			cmp = strcmp(palabra,palabras[i].en);
				if(cmp == 0) {
					p("La traducci%cn de %s es %s.\n\n",162,palabras[i].en,palabras[i].es);
					aux = 1;
				}
		}
	} else {
		if(opcion == 2) {
			for(i = 0; i < 50 && aux == 0; i++) {
				cmp = strcmp(palabra,palabras[i].es);
				if(cmp == 0) {
					p("La traducci%cn de %s es %s.\n\n",162,palabras[i].es,palabras[i].en);
					aux = 1;
				}
			}
		}
	}
}
