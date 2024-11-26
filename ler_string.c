#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    char palavrao[100] ;


    printf("Digite o palavrao: ");
    fgets(palavrao,100,stdin);

    for(i = 0; i<100; i++){
        if(palavrao[i]=='\0'){
            break;
        }
    }
    for(int j = i-1;j>=0;j--){
        printf("%c",palavrao[j]);

    }


    return 0;
}