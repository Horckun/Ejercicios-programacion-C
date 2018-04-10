// Do while

#include <stdio.h>

int main() {
	
	char h;
	
	do {
		
		printf("Introduce una letra: ");
		fflush(stdin);
		scanf("%c",&h);
		printf("\n");
		
	} while(h != 'h' && h != 'H');
	
	system("pause");
	return 0;
	
}
