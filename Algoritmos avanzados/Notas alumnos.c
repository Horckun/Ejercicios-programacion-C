// Registrar notas de un alumno

#include <stdio.h>

#define p printf
#define s scanf

typedef struct {
	int ingles;
	int mates;
	int lengua;
}notas;

void calif(notas *eval);

int main() {
	notas eval;
	
	calif(&eval);
	
	p("Las notas son:\n\n");
	p("Ingles: %i.\n",eval.ingles);
	p("Matematicas: %i.\n",eval.mates);
	p("Lenguaje: %i.\n\n",eval.lengua);
	
	system("pause");
	return 0;
}
void calif(notas *eval) {
	p("Introduce la nota de ingles: ");
	s("%i",&eval->ingles);
	p("\n");
	
	p("Ahora introduce la nota de matematicas: ");
	s("%i",&eval->mates);
	p("\n");
	
	p("Y por ultimo, introduce la nota de lenguaje: ");
	s("%i",&eval->lengua);
	p("\n");
}
