// Reserva y liberación de memoria

// Librerías
#include <stdio.h>
#include <stdlib.h>

// Estructuras
struct ficha {
	char nombre[20];
	int edad;
};

// Función principal
int main() {
	// Declaramos variable para estructura
	struct ficha *persona;
	// Reservamos el espacio
	persona = (struct ficha*) malloc (sizeof(struct ficha));
	// Comprobar que hemos reservado espacio
	if(persona == NULL) {
		printf("No se ha podido reservar espacio en memoria.\n");
	} else {
		printf("Se ha reservado espacio en memoria.\n");
		// Solicitamos nombre y edad
		printf("Introduce un nombre: ");
		gets(persona->nombre);
		printf("Introduce una edad: ");
		scanf("%i",&persona->edad);
		// Mostramos nombre y edad
		printf("Nombre: %s.\n",persona->nombre);
		printf("Edad: %d.\n",persona->edad);
		// Liberamos memoria
		free(persona);
	}
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
