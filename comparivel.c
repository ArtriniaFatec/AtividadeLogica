#include <stdio.h>
#include <stdlib.h>

int main(){
    int entrada_1[5];
    int entrada_2[5];
    int verificador = 0;
    for(int x = 0; x<5;x++){
        printf("Digite o 1°valor[%d]: ",x);
        scanf("%d",&entrada_1[x]);
        
        printf("Digite o 2°valor[%d]: ",x);
        scanf("%d",&entrada_2[x]);
    }
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            if(entrada_1[i]==entrada_2[j]){
                printf("1°posicao[%d], 2°posicao[%d], Valor igual : %d \n",i,j,entrada_1[i]);
                verificador = 1
            }
        }
    }
    if(verificador){
        printf("Nenhum é igual...");
    }
    



    return 0;
}