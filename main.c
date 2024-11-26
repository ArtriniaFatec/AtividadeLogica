#include <stdio.h>
int main(){
    int entrada;
    printf("Digite um numero: ");
    scanf("%d",&entrada);
        for(int i = 1; i<=entrada; i++){
            for(int j = 1; j<=i; j++){
                printf("[%d]",j);
            }
            printf("\n");
        }
    return 0;
}