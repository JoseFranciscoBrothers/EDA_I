#include <stdio.h>

int main()
{
	int n;
	int a[10];
	int sum;
	int min;
	int min_pos;
	int max;
	int max_pos;
	float prom;
	int res;
	int invertido[10];


	printf("Ingrese una cantidad (maximo 10): ");
	scanf("%d",&n);
	printf("\n");


	if(n>10){
		printf("\n No se pueden usar mas de 10 valores. \n Usaremos la cantidad maxima 10.\n");
		n = 10;
	}

	if(n<1){
		printf("\n Es necesario tener al menos 1 valor. \n Usaremos la cantidad maxima 10.\n");
		n = 1;
	}

	printf("Ingrese %d numeros: ", n);
	printf("\n");


	for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &a[i]); 
    }


	printf("\nLos numeros del array son:\n");
	for(int i = 0; i < n; i++){
		printf("\t\t\t\t%d\n", a[i]);
	}

	printf("\nLa suma es: ");
	sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
	}
	printf("%d\n", sum);

	printf("\nEl promedio es: ");
	prom = (float)sum/(float)n;
	printf("%f\n", prom);

	printf("\nLa resta sobre 100 es: ");
	res = 100;
	for(int i = 0; i < n; i++){
		res -= a[i];
	}
	printf("%d\n", res);


	printf("\nEl minimo es: ");
	min = a[0];
	min_pos = 0;
	for(int i = 0; i < n; i++){
		if(a[i]<min){
			min = a[i];
			min_pos = i;
		}
	}
	printf("%d y se encuentra en la posicion %d", min, min_pos);


	printf("\n\nEl maximo es: ");
	max = a[0];
	max_pos = 0;
	for(int i = 0; i < n; i++){
		if(a[i]>max){
			max = a[i];
			max_pos = i;
		}
	}
	printf("%d y se encuentra en la posicion %d", max, max_pos);

	for(int i = 0; i < n; i++){
		invertido[i] = a[n-i-1];
	}

	printf("\n\nLos numeros del array invertido son:\n");
	for(int i = 0; i < n; i++){
		printf("\t\t\t\t%d\n", invertido[i]);
	}


	return 0;
}
