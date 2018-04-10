// LIBROS MEDIANTE VECTORES DINÁMICOS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define p printf
#define s scanf

typedef struct {
	int paginas;
	int precio;
	int lleno;
	char *titulo;
	char *autor;
}libro;

libro libros[5];

void vaciar();
void cambiar(char palabras[]);
void insertar();
void buscar();

int main() {
	vaciar();
	
	int opcion,i;
	
	do {
		do {
			p("Elige una opci%cn:\n",162);
			p("=================\n\n");
			p("[1] - A%cadir libro.\n",164);
			p("[2] - Buscar libro.\n\n");
			p("Opci%cn: ",162);
			fflush(stdin);
			s("%i",&opcion);
			p("\n");
			switch(opcion) {
				case 1: {
					insertar();
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
	
	for(i = 0; i < 5; i++) {
		free(libros[i].autor);
		free(libros[i].titulo);
	}
	
	p("Visita: http://horckun.es/\n\n");
	
	return 0;
}
void vaciar() {
	int i;
	
	for(i = 0; i < 5; i++) {
		libros[i].lleno = 0;
		p("%i/5 libros vacios...\r",i+1);
		Sleep(1000);
	}
	p("\n\n");
	p("%i libros vac%cos.\n\n",i,161);
}
void cambiar(char palabras[]) {
	int i,aux;
	
	aux = 0;
	
	for(i = 0; i < 100 && aux == 0; i++) {
		if(palabras[i] == '\n') {
			palabras[i] = '\0';
		}
	}
}
void insertar() {
	srand(time(NULL));
	
	int i,aux;
	char titulo[100];
	
	aux = 0;
	
	for(i = 0; i < 5 && aux == 0; i++) {
		if(libros[i].lleno == 0) {
			libros[i].paginas = rand()%1001;
			libros[i].precio = rand()%101;
			p("Introduce el t%ctulo del libro: ",161);
			fflush(stdin);
			fgets(titulo,100,stdin);
			cambiar(titulo);
			p("\n");
			libros[i].titulo = (char*)malloc((strlen(titulo)+1)*sizeof(char));
			if(libros[i].titulo == NULL) {
				p("No se ha podido asignar un tamaño a la memoria.\n");
				exit(1);
			}
			strcpy(libros[i].titulo,titulo);
			p("Introduce el autor del libro: ");
			fflush(stdin);
			fgets(titulo,100,stdin);
			cambiar(titulo);
			p("\n");
			libros[i].autor = (char*)malloc((strlen(titulo)+1)*sizeof(char));
			if(libros[i].autor == NULL) {
				p("No se ha podido asignar un tamaño a la memoria.\n");
				exit(1);
			}
			strcpy(libros[i].autor,titulo);
			p("El libro %s pertenece a %s, tiene %i p%cginas y cuesta %i euros.\n\n",libros[i].titulo,libros[i].autor,libros[i].paginas,160,libros[i].precio);
			aux = 1;
			libros[i].lleno = 1;
			p("%i libros a%cadidos.\n\n",i+1,164);
		}
		if(libros[5].lleno == 1) {
			p("No se puede a%cadir m%cs libros.\n\n",164,160);
		}
	}
}
void buscar() {
	int opcion,aux,cmp,i;
	char titulo[100];
	
	aux = 0;
	
	do {
		p("Elige una opci%cn:\n",162);
		p("=================\n\n");
		p("[1] - Buscar por t%ctulo.\n",161);
		p("[2] - Buscar por autor.\n\n");
		p("Opci%cn: ",162);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
	} while(opcion < 1 || opcion > 2);
	
	if(opcion == 1) {
		p("Introduce el t%ctulo a buscar: ",161);
		fflush(stdin);
		fgets(titulo,100,stdin);
		cambiar(titulo);
		p("\n");
		for(i = 0; i < 5 && aux == 0; i++) {
			cmp = strcmp(titulo,libros[i].titulo);
			if(cmp == 0) {
				p("El libro %s pertenece a %s, tiene %i p%cginas y cuesta %i euros.\n\n",libros[i].titulo,libros[i].autor,libros[i].paginas,160,libros[i].precio);
				aux = 1;
			}
		}
	} else {
		if(opcion == 2) {
			p("Introduce el autor a buscar: ");
			fflush(stdin);
			fgets(titulo,100,stdin);
			cambiar(titulo);
			p("\n");
			for(i = 0; i < 5 && aux == 0; i++) {
				cmp = strcmp(titulo,libros[i].autor);
				if(cmp == 0) {
					p("El libro %s pertenece a %s, tiene %i p%cginas y cuesta %i euros.\n\n",libros[i].titulo,libros[i].autor,libros[i].paginas,160,libros[i].precio);
					aux = 1;
				}
			}
		}
	}
}
