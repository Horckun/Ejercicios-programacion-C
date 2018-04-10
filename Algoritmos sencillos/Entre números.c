// Entre números

#include <stdio.h>

int main() {
	
	int h,o,i;
	
	printf("Introduce un numero para la variable h: ");
	scanf("%i",&h);
	printf("\n");
	printf("Ahora introduce otro numero pero que sea mayor para la variable o: ");
	scanf("%i",&o);
	printf("\n");
	
	if(h<o) {
		
		for(i = h + 1; i < o; i++) {
			
			printf("%i, ",i);
			
		}
		
		printf("\n\n");
		
	} else {
		
		printf("No has introducido correctamente los numeros");
		printf("\n\n");
		
	}
	
	if(h<o) {
		
		i = h + 1;
	
		while(i < o) {
		
			printf("%i, ",i);
			i++;
		
		}
		
		printf("\n\n");
		
	} else {
		
		printf("No has introducido correctamente los numeros");
		printf("\n\n");
		
	}
	
	system("pause");
	return 0;
	
}
