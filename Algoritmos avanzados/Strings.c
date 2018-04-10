// Strings

#include <stdio.h>

#define p printf
#define s scanf

int main() {
	
	char frase[10];
	
	p("Introduce una frase: ");
	fgets(frase,10,stdin);
	p("\n");
	
	p("%s\n\n",frase);
	
	system("pause");
	return 0;
}
