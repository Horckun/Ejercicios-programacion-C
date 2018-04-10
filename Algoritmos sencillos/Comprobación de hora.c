// Comprobación de hora

#include <stdio.h>

int main() {
	
	int h,m,s;
	
	printf("Selecciona la hora: ");
	scanf("%i",&h);
	printf("\n");
	
	printf("Selecciona los minutos: ");
	scanf("%i",&m);
	printf("\n");
	
	printf("Selecciona los segundos: ");
	scanf("%i",&s);
	printf("\n");
	
	if(h>=00 && h<=23 && m>=00 && m<=59 && s>=00 && s<=59) {
		
		s++;
		
		if(s==60) {
			
			s=00;
			m = m+1;
			
		}
		
		if(m==60) {
			
			m=00;
			h = h+1;
			
		}
		
		if(h==24) {
			
			h=00;
			
		}
		
		printf("Son las %i:%i:%i",h,m,s);
		printf("\n\n");
		
	} else {
		
		printf("La hora es incorrecta");
		printf("\n\n");
		
	}
	
	system("pause");
	return 0;
	
}
