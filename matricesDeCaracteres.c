/*
 * Matrices de caracteres
 * 
 * Funciones para carga, recorrido, ordenamiento y afines.
 * 
 * Autor: Diego A. Plaza
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#define F 5
#define C 5

int aleatorio(int inf, int sup);
void cargarMatC(char mati[F][C]);
void imprimirMatC(char mati[F][C]);

int main()
{
	srand(time(NULL));
    char matC[F][C]={0};
    cargarMatC(matC);
    imprimirMatC(matC);
    return 0;
}

void cargarMatC(char mati[F][C]){
    int f, c;
    for(f=0;f<F;f++){
        for(c=0;c<C-1;c++){
            mati[f][c]=aleatorio(97,122);
        }
        mati[f][c]='\0';
    }

}

void imprimirMatC(char mati[F][C]){
    int f, c;
    for(f=0;f<F;f++){
        //printf(" %s  \n",mati[f]);
        for(c=0;c<C;c++){
            printf("%3c",mati[f][c]);
        }
        printf("\n");
    }
}

int aleatorio(int inf, int sup){
    return inf + (rand() % (sup-inf+1));
}
