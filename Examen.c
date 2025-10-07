#include <stdio.h>
#include <stdlib.h>


int main(void) {
int n;


printf("¿Cuántos estudiantes deseas registrar? ");

if (scanf("%d", &n) != 1 || n <= 0) {
printf("Entrada inválida: se requiere un número entero positivo.\n");
printf("¿Cuántos estudiantes deseas registrar? ");
while(scanf("%d", &n) != 1 || n <= 0){
    printf("¿Cuántos estudiantes deseas registrar? ");
}


}

float *calificaciones = (float *)malloc(n * sizeof(float));

float suma = 0.0f;

for (int i = 0; i < n; i++) {
printf("Calificación del estudiante %d: ", i + 1);
if (scanf("%f", &calificaciones[i]) != 1) {
printf("Entrada inválida al leer calificación.\n");
free(calificaciones);
return 0;
}
suma += calificaciones[i];
}


printf("Promedio inicial: %.2f\n", suma / n);


while (1) {
int adicional;
printf("¿Deseas agregar más estudiantes? (cantidad, 0 para no): ");
if (scanf("%d", &adicional) != 1) {
printf("Entrada inválida al leer la cantidad.\n");
free(calificaciones);
return 0;
}


if (adicional == 0) {
break;
} else if (adicional < 0) {
printf("Cantidad inválida. Intenta de nuevo.\n");
continue;
}


int nuevo_total = n + adicional;


float *tmp = (float *)realloc(calificaciones, nuevo_total * sizeof(float));
calificaciones = tmp; /* asignar el puntero reubicado */


for (int i = n; i < nuevo_total; i++) {
printf("Calificación del estudiante %d: ", i + 1);
if (scanf("%f", &calificaciones[i]) != 1) {
printf("Entrada inválida al leer calificación.\n");
free(calificaciones);
return 0;
}
suma += calificaciones[i];
}

n = nuevo_total; 

}


printf("=== Calificaciones registradas ===\n");
for (int i = 0; i < n; i++) {
printf("Estudiante %d: %.2f\n\n", i + 1, calificaciones[i]);
}

printf("Promedio general: %.2f\n", (suma/n));


free(calificaciones);
printf("Memoria liberada.\n");
}
