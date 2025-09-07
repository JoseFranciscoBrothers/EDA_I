#include <stdio.h>
#include <string.h>

#define NUM_PEl 10

struct pelicula{
char nombre[20];
char genero[20];
int anio;
int numDirectores;
char directores[2][20];
};

int main(){
	struct pelicula videoteca[NUM_PEl];
	char generobus[20];
	char generos[10][20];
	int generocant[10];

	printf("Ingresa 10 peliculas\n");

	for(int i=0;i<NUM_PEl;i++){
		printf("\nIngresa el nombre de la Pelicula %d:", i);
		scanf("%19s", videoteca[i].nombre);
		printf("\nIngresa el genero de la Pelicula %d:", i);
		scanf("%19s", videoteca[i].genero);
		printf("\nIngresa el año de la Pelicula %d:", i);
		scanf("%d", &videoteca[i].anio);
		printf("\nIngresa el numero de directores de la Pelicula %d:", i);
		scanf("%d", &videoteca[i].numDirectores);
		for(int j=0;j<videoteca[i].numDirectores && j<3;j++){
			printf("\nIngresa el nombre de los directores de la Pelicula %d:", i);
			scanf("%19s", videoteca[i].directores[j]);
		}

	}

	printf("\nPeliculas en orden inverso");

	for(int i=0;i<NUM_PEl;i++){
		printf("\nPelicula %d", NUM_PEl - i - 1);
		printf("\n\tNombre de la Pelicula: %s", videoteca[NUM_PEl - i - 1].nombre);
		printf("\n\tGenero de la Pelicula: %s", videoteca[NUM_PEl - i - 1].genero);
		printf("\n\tAnio de la Pelicula: %d", videoteca[NUM_PEl - i - 1].anio);
		printf("\n\tNumero de directores de la Pelicula: %d", videoteca[i].numDirectores);
		for(int j=0;j<videoteca[NUM_PEl - i - 1].numDirectores;j++){
			printf("\n\tNombre de los directores de la Pelicula: %19s", videoteca[NUM_PEl - i - 1].directores[j]);
		}

	}

	printf("\n\n\nIngresa el genero que quieres buscar: ");
	scanf("%19s", generobus);


	int k = 0;
	for(int i=0;i<NUM_PEl;i++){
		if(!strcmp(generobus, videoteca[i].genero)){
			printf("\n La pelicula: %s, es del genero: %s", videoteca[i].nombre, videoteca[i].genero);
			k = 1;
		}	

	}

	if(k == 0){
			printf("\n No se encontro ninguna pelicula de ese genero");
		}

	int g = 0;
	strcpy(generos[g], videoteca[g].genero);
	g++;
	int l;
	for(int i=0;i<NUM_PEl;i++){
		l = 0;
		for(int j=0;j<g;j++){
		 if(!strcmp(videoteca[i].genero,generos[j])){
			l++;
		 }
		}
		if(l==0){
			strcpy(generos[g], videoteca[i].genero);
			g++;
		}

	}


	printf("\n\n\nGeneros");
	for(int i=0;i<g;i++){
		generocant[i] = 0;
		for(int j=0;j<NUM_PEl;j++){
			if(!strcmp(generos[i],videoteca[j].genero)){
				generocant[i]++;
			}
		}
		printf("\n Genero %s : %d", generos[i], generocant[i]);
	}
	printf("\n\n");



}

