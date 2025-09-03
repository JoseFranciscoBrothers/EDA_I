#include <stdio.h>

int main(void){
	int a[5] = {2, 4, 6, 8, 10};
	int *p = a; // p apunta a a[0]

	printf("1) a[1] = %d\n", a[1]); // Imprime 4
	printf("2) *(a+3) = %d\n", *(a+3)); // Imprime 8, pues está 3 posiciones después de a[0]
	printf("3) *p++ = %d\n", *p++); // Imprime 2, pues es el valor de a[0], y después de esto p apunta al valor siguiente a[1]
	printf("4) *++p = %d\n", *++p); // Imprime 6, pues el ++ hace que apunte al valor siguiente (a[2]) y después lo imprime
	printf("5) p[1] = %d\n", p[1]); // Imprime 8 pues la posición de p en este momento apunta a a[2] y p[1] apuntaria al siguiente valor (a[3])
	printf("6) *(p+=2) = %d\n", *(p+=2)); // Imprime 10, pues p actualmente está en la posición p[2], por lo que *(p+=2) hace que p apunte a la posición a[4] y posteriormente la imprima
	printf("7) p - a = %d\n", p-a); // Imprime 4, pues es la distancia entre la posición que apunta p (a[4]) y a[0] que es el primer valor de a
	return 0;
}