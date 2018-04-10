// Formulario de registro

#include <stdio.h>

#define p printf
#define s scanf

typedef struct {
	char nombre[50];
	char empleo[50];
	int edad;
}registro;

int main() {
	registro f1,f2;
	
	p("Introduce valores para el primer formulario\n");
	p("===========================================\n\n");
	
	p("Introduce un nombre: ");
	fgets(f1.nombre,50,stdin);
	
	p("Introduce un empleo: ");
	fflush(stdin);
	fgets(f1.empleo,50,stdin);
	
	p("Introduce una edad: ");
	s("%i",&f1.edad);
	
	p("\nIntroduce valores para el segundo formulario\n");
	p("==============================================\n\n");
	
	p("Introduce un nombre: ");
	fflush(stdin);
	fgets(f2.nombre,50,stdin);
	
	p("Introduce un empleo: ");
	fflush(stdin);
	fgets(f2.empleo,50,stdin);
	
	p("Introduce una edad: ");
	s("%i",&f2.edad);
	
	p("\n");
	
	p("Nombres:\n");
	p("========\n\n");
	p("%s",f1.nombre);
	p("%s\n",f2.nombre);
	
	p("Empleos:\n");
	p("========\n\n");
	p("%s",f1.empleo);
	p("%s\n",f2.empleo);
	
	p("Edades:\n");
	p("=======\n\n");
	p("%i\n",f1.edad);
	p("%i\n\n",f2.edad);
	
	system("pause");
	return 0;
}
