// Serie Fibonacci

#include <stdio.h>

int main() {
	
	int x,y,r,n,i;
	
	x = 0;
	y = 1;
	
	printf("Introduce un numero mayor a 1: ");
	scanf("%i",&n);
	printf("\n");
	
	if(n > y) {
		
		printf("%i, %i, ",x,y);
		
		for(i = 1; i <= n; i++) {
			
			r = x + y;
			
			printf("%i, ",r);
			
			x = y;
			y = r;
			
		}
		
		printf("\n\n");
		
	} else {
		
		printf("No se ha seguido las instrucciones");
		printf("\n\n");
		
	}
	
	system("pause");
	return 0;
	
}
