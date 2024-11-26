#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int Notas [100][3];
    float Media [100];
    int Id [100];
    int Quantidade_Alunos;

    srand(time(NULL));

    printf("Quantos alunos vão ser avaliados: ");
    scanf("%d",&Quantidade_Alunos);

    printf("[Id][Nota 1][Nota 2][Nota 3][Media]\n");
    for(int i = 0;i<=Quantidade_Alunos;i++){
        for(int j = 0; j<=2;j++){
            Notas[i][j] = (rand() % (10 - 1 + 1)) + 1;;
        }
        Media[i] = (Notas[i][0]+Notas[i][1]+Notas[i][2])/3;
        Id[i] = (rand() % (2000 - 1000 + 1)) + 1000;
        printf("[%d][%d][%d][%d][%0.2f]\n",Id[i],Notas[i][0],Notas[i][1],Notas[i][2],Media[i]);
    }

}
