// Comprobar DNI

// Librerías
#include <stdio.h>
#include <string.h>

// Prototipos
char letra_dni(long int numero);

// Función principal
int main() {
	// Declaración de variables
	long int dni;
	char letra;
	
	// Solicitamos número y letra de DNI y lo comprobamos
	do {
		printf("Escribe tu n%cmero de DNI: ",163);
		fflush(stdin);
		scanf("%d",&dni);
		printf("\n");
		
		printf("Ahora escribe la letra de tu DNI: ");
		fflush(stdin);
		scanf("%c",&letra);
		printf("\n");
		
		if(letra == letra_dni(dni)) {
			printf("El DNI es correcto.\n");
		} else {
			printf("La letra de tu DNI es: %c.\n\n",letra_dni(dni));
		}
	} while(letra != letra_dni(dni));
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
// Funciones secundarias
char letra_dni(long int numero) {
	// Declaramos variales
	int resto;
	char letra, cadena[25];
	
	// Copiamos a cadena
	strcpy(cadena,"TRWAGMYFPDXBNJZSQVHLCKET");
	
	// Asignamos valores
	resto = numero % 23;
	letra = cadena[resto];
	
	// Devolvemos valor
	return letra;
}
