#include <stdio.h>
#include <stdlib.h>
int main (){
    int *arr,*arr2, num, m;
    m = 0;
    printf("¿Cuantos elementos quieres almacenar?\n");
    scanf("%d",&num);
    printf("\n");
    
    arr = (int *)malloc (num * sizeof(int));
    if (arr!=NULL) {
        for(int i = 0; i < num; i++){
		    printf("%d", arr[i]);
		    printf("\n");
	    }
	    printf("\n");

    }
    arr2 = (int *)calloc (num, sizeof(int));
    if (arr2!=NULL) {
        for(int i = 0; i < num; i++){
		    printf("%d", arr2[i]);
		    printf("\n");
	    }

    }
    
    printf("Ingrese los %d numeros del arreglo: ", num);
	printf("\n");


	for (int i = 0; i < num; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &arr2[i]); 
    }
    
    while(m<num){
        printf("Ingrese un nuevo tamaño mayor o igual a %d para el arreglo: ", num);
        scanf("%d",&m);
    }

    arr2 = (int *)realloc (arr2,m*sizeof(int));
    
    if(m>num){
        printf("Ingrese los %d numeros que se deben añadir: ", m - num);
    	printf("\n");

    	for (int i = num; i < m; i++) {
            printf("Elemento %d: ", i);
            scanf("%d", &arr2[i]); 
        }
    
    }
    
    for(int i = 0; i < m; i++){
		    printf("%d", arr2[i]);
		    printf("\n");
	    }
    
    free(arr);
    free(arr2);

    printf("\nMemoria liberada correctamente.\n");
    
    return 0;
}
