// Cronómetro

#include <stdio.h>
#include <windows.h>

int main() {
	
	int h,m,s,x;
	
	x = 1000;
	
	for(h=0; h<24; h++) {
		
		for(m=0; m<60; m++) {
			
			for(s=0; s<60; s++) {
				printf("%02i:%02i:%02i",h,m,s);
				printf("\r");
				Sleep(x);
				
			}
			
		}
		
	}
	
	system("pause");
	return 0;
	
}
