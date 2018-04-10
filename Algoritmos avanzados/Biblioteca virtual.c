// BIBLIOTECA

#include <stdio.h>
#include <string.h>

#define p printf
#define s scanf

typedef struct {
	char nombre[30];
	int paginas;
	int lleno;
}libro;

typedef struct {
	char nombre[50];
	int lleno;
	libro libros[5];
}estanteria;

estanteria estanterias[2];

void crear();
void insertar();
void buscar();
void ver();
void vaciar();
void cambio(char cambiar[50]);

int main() {
	vaciar();
	
	int opcion;
	
	do {
		do {
			p("Elige una opci%cn:\n",162);
			p("-----------------\n\n");
			p("[1] - Crear estanter%cas.\n",161);
			p("[2] - Insertar libros.\n");
			p("[3] - Buscar libro.\n");
			p("[4] - Ver estanter%cas.\n\n",161);
			p("Opci%cn: ",162);
			fflush(stdin);
			s("%i",&opcion);
			p("\n");
			switch(opcion) {
				case 1: {
					crear();
					break;
				}
				case 2: {
					insertar();
					break;
				}
				case 3: {
					buscar();
					break;
				}
				case 4: {
					ver();
					break;
				}
			}
		} while(opcion < 1 || opcion > 4);
		p("Elige una opci%cn:\n",162);
		p("-----------------\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir.\n\n");
		p("Opci%cn: ",162);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
	} while(opcion == 1);
	
	return 0;
}
void crear() {
	int i,aux;
	
	aux = 0;
	
	for(i = 0; i < 2 && aux == 0; i++) {
		if(estanterias[i].lleno == 0) {
			p("Introduce un nombre para la estanter%ca %i: ",161,i+1);
			fflush(stdin);
			fgets(estanterias[i].nombre,50,stdin);
			cambio(estanterias[i].nombre);
			p("\n");
			estanterias[i].lleno = 1;
			aux = 1;
			p("Has a%cadido el nombre %s a la estanter%ca %i.\n\n",164,estanterias[i].nombre,161,i+1);
		}
	}
	
	if(estanterias[0].lleno && estanterias[1].lleno == 1) {
		p("Todas las estanter%cas ya tienen nombre.\n\n",161);
	}
}
void insertar() {
	int opcion,i,aux;
	
	aux = 0;
	
	srand(time(NULL));
	
	do {
		p("Elige una opci%cn:\n",162);
		p("-----------------\n\n");
		for(i = 0; i < 2; i++) {
			if(estanterias[i].lleno == 1) {
				p("[%i] - Insertar libro en %s.\n",i+1,estanterias[i].nombre);
			}
		}
		p("\n");
		p("Opci%cn: ",162);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
	} while(opcion < 1 || opcion > 2);
	
	if(opcion == 1) {
		for(i = 0; i < 5 && aux == 0; i++) {
			if(estanterias[0].libros[i].lleno == 0) {
				p("Introduce el titulo del libro %i para guardarlo en la estanter%ca %s: ",i+1,161,estanterias[0].nombre);
				fflush(stdin);
				fgets(estanterias[0].libros[i].nombre,30,stdin);
				cambio(estanterias[0].libros[i].nombre);
				p("\n");
				estanterias[0].libros[i].paginas = rand()%1001;
				aux = 1;
				estanterias[0].libros[i].lleno = 1;
				p("El libro %s tiene %i p%cginas.\n\n",estanterias[0].libros[i].nombre,estanterias[0].libros[i].paginas,160);
			}
		}
	} else {
		if(opcion == 2) {
			for(i = 0; i < 5 && aux == 0; i++) {
				if(estanterias[1].libros[i].lleno == 0) {
					p("Introduce el titulo del libro %i para guardarlo en la estanter%ca %s: ",i+1,161,estanterias[1].nombre);
					fflush(stdin);
					fgets(estanterias[1].libros[i].nombre,30,stdin);
					cambio(estanterias[1].libros[i].nombre);
					p("\n");
					estanterias[1].libros[i].paginas = rand()%1001;
					aux = 1;
					estanterias[1].libros[i].lleno = 1;
					p("El libro %s tiene %i p%cginas.\n\n",estanterias[1].libros[i].nombre,estanterias[1].libros[i].paginas,160);
				}
			}
		}
	}
	
	if(estanterias[0].libros[4].lleno == 1 || estanterias[1].libros[4].lleno == 1) {
		p("Ya no caben m%cs libros en la estanter%ca %s.\n\n",160,161,estanterias[0].nombre);
	}
}
void buscar() {
	char busqueda[30];
	int i,j,aux,cmp;
	
	aux = 0;
	
	p("Introduce el nombre del libro que deseas buscar: ");
	fflush(stdin);
	fgets(busqueda,30,stdin);
	cambio(busqueda);
	p("\n");
	
	for(i = 0; i < 2 && aux == 0; i++) {
		for(j = 0; j < 5 && aux == 0; j++) {
			cmp = strcmp(busqueda,estanterias[i].libros[j].nombre);
			if(cmp == 0) {
				p("El libro %s est%c guardado en la estanter%ca %s.\n\n",estanterias[i].libros[j].nombre,160,161,estanterias[i].nombre);
				aux = 1;
			}
		}
	}
}
void ver() {
	int i,j;
	
	p("Listado de las estanter%cas con sus libros:\n\n",161);
	
	for(i = 0; i < 2; i++) {
		if(estanterias[i].lleno == 1) {
			Sleep(1000);
			p("[%i] - %s.\n",i+1,estanterias[i].nombre);
			for(j = 0; j < 5; j++) {
				if(estanterias[i].libros[j].lleno == 1) {
					Sleep(1000);
					p("  [%i] - %s.\n",j+1,estanterias[i].libros[j].nombre);
				}
			}
			p("\n");
		}
	}
}
void vaciar() {
	p("Vaciando estanter%cas...",161);
	p("\n\n");
	
	int i;
	
	for(i = 0; i < 2; i++) {
		Sleep(2000);
		p("%i/2 estanter%cas vacias.\r",i+1,161);
		estanterias[i].lleno = 0;
	}
	
	Sleep(2000);
	
	p("\n\n");
	p("Vaciando libros...");
	p("\n\n");
	
	int j;
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 5; j++) {
			Sleep(1000);
			p("%i/5 libros vacios de la estanter%ca %i.\r",j+1,161,i+1);
			estanterias[i].libros[j].lleno = 0;
		}
		p("\n\n");
	}
	
	Sleep(1000);
	
	p("%i libros vacios en total.\n\n",j*i);
	
	Sleep(2000);
}
void cambio(char cambiar[50]) {
	int i;
	
	for(i = 0; i < 50; i++) {
		if(cambiar[i] == '\n') {
			cambiar[i] = '\0';
		}
	}
}
