#include <stdio.h>
#include <stdlib.h>

int main(){
    int Produto_1[5],Produto_2[5], Soma = 0 ;

    for(int i=0;i<=4;i++){
        printf("1°Entrada: ");
        scanf("%d",&Produto_1[i]);
        printf("2°Entrada: ");
        scanf("%d",&Produto_2[i]);

        Soma = Produto_1[i] * Produto_2[i] + Soma;
    }

    printf("O produto interno da operacao é %d",Soma);

}