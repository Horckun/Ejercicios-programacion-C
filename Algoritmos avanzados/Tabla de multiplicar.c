// Tablas de multiplicar

#include <stdio.h>

int main() {
	
	int i,j;
	
	for(i=1; i<=9; i++) {
		
		for(j=1; j<=10; j++) {
			
			printf("%i x %i = %i",i,j,i*j);
			printf("\n");
			
		}
		
		printf("\n");
		
	}
	
	system("pause");
	return 0;
	
}
