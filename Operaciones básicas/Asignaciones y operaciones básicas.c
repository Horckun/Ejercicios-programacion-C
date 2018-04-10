// Asignaciones y operaciones básicas

#include <stdio.h>
#include <math.h>

int main() {
	
	int h,k,s,r,m,p,n;
	float d,a,i,z;
	
	h = 8;
	k = 5;
	
	s = h + k;
	r = h - k;
	m = h * k;
	d = h / k;
	a = h % k;
	p = pow(h,k);
	i = sqrt(h);
	z = sqrt(k);
	
	
	printf("El valor de h es %i, y el valor de k es %i",h,k);
	printf("\n\n");
	printf("Sumando esos numeros, el valor es: %i",s);
	printf("\n\n");
	printf("Restando esos numeros, el valor es: %i",r);
	printf("\n\n");
	printf("Multiplicando esos numeros, el valor es: %i",m);
	printf("\n\n");
	printf("Dividiendo esos numeros, el valor es: %f",d);
	printf("\n\n");
	printf("El resto de la division de esos numeros es: %f",a);
	printf("\n\n");
	printf("La potencia de %i elevado a %i es: %i",h,k,p);
	printf("\n\n");
	printf("La raiz cuadrada de %i y %i es: %f y %f",h,k,i,z);
	printf("\n\n");
	printf("Inserta un valor de tipo entero para la variable n: ");
	scanf("%i",&n);
	printf("\n");
	printf("Vamos a sumarle 1 a %i",n);
	printf("\n\n");
	n++;
	printf("Ahora n vale %i",n);
	printf("\n\n");
	printf("Pero mejor vamos a dejarlo como estaba");
	printf("\n\n");
	n--;
	printf("Ahora ya vale lo mismo que antes: %i",n);
	printf("\n\n");
	
	system("pause");
	return 0;
	
}
