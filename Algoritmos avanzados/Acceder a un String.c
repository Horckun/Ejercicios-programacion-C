// Acceder a un String

#include <stdio.h>
#include <string.h>

#define p printf
#define s scanf

void cambio(char c1[]);

int main() {
	char c1[100];
	
	p("Introduce una frase: ");
	fgets(c1,100,stdin);
	
	cambio(c1);
	
	p("%s\n\n",c1);
	
	system("pause");
	return 0;
}
void cambio(char c1[]) {
	int i;
	
	for(i = 0; i < 100; i++) {
		if(c1[i] == '\n') {
			c1[i] = '\0';
		}
	}
}
