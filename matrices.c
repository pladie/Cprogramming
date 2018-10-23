/*
 * Matrices de numeros
 * 
 * Funciones para carga, recorrido, ordenamiento y afines.
 * 
 * Autor: Diego A. Plaza
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#define F 5	//Cantidad de filas de la matriz
#define C 5 //Cantidad de columnas de la matriz
#define DESDE 0 //Minimo del random
#define HASTA 99 //Maximo del random

int aleatorioEntre(int inf, int sup);
void cargarMatriz(int mati[F][C]);
void mostrarMatriz(int mati[F][C]);

int main(){
	int mati [F][C]={0};
	srand(time(NULL));	//Genera una semilla base para el random

	cargarMatriz(mati);
	mostrarMatriz(mati);
	
	return 0;
}

void cargarMatriz(int mati[F][C]){
    int f, c;
    for(f=0;f<F;f++){
        for(c=0;c<C;c++){
            mati[f][c]=aleatorioEntre(DESDE,HASTA);
        }
    }

}

int aleatorioEntre(int inf, int sup){
    return inf + (rand() % (sup-inf+1));
}

void mostrarMatriz(int mati[F][C]){
    int f, c;
    for(f=0;f<F;f++){
        for(c=0;c<C;c++){
            printf("%3d",mati[f][c]);
        }
        printf("\n");
    }
}
