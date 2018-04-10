// Cambiar frase String

#include <stdio.h>
#include <string.h>

#define p printf
#define s scanf

int main() {
	char cambio[] = {"Mira, una rata corriendo"};
	int i;
	
	p("Vamos a cambiar la frase: %s",cambio);
	p("\n");
	
	for(i = 0; i < 50; i++) {
		if(cambio[i] == 'r') {
			cambio[i] = 'l';
		}
	}
	
	p("Ahora la frase quedaria en: %s\n\n",cambio);
	
	system("pause");
	return 0;
}
