#include <stdio.h>
#include <stdlib.h>
#define MAX 2

int main(){

    double matriz_a[MAX][MAX];
    double matriz_b[MAX][MAX];
    double matriz_resultante[MAX][MAX];


    for(int i=0; i < MAX; i++){
        for(int j=0; j < MAX; j++){
            printf("Entrada da matriz A na linha [%d] e coluna [%d] :",i,j);
            scanf("%lf",&matriz_a[i][j]);
        }
    }
    for(int i=0; i < MAX; i++){
        for(int j=0; j < MAX; j++){
            printf("Entrada da matriz B na linha [%d] e coluna [%d] :",i,j);
            scanf("%lf",&matriz_b[i][j]);
        }
    }

    for(int i=0; i < MAX; i++){
        for(int j=0; j < MAX; j++){
            for(int k=0; k < MAX; k++)
            {   
                printf("[%.0lf][%.0lf]+[%.0lf][%.0lf] \n",matriz_a[i][j],matriz_b[i][j],matriz_a[i][k],matriz_b[k][j]);
                matriz_resultante[i][j] = matriz_a[i][j] * matriz_b[i][j] + matriz_a[i][k] * matriz_b[k][j];
                
            }
            printf("[%.2lf] \t",matriz_resultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}