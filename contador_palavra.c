#include <stdin>
#include <stdlib>
#include <stdio>

int main(){
    int i=0,max=0,min=0,z=0;
    char frase[100];
    char palavra[50];

    printf("Digite um texto: ");
    fgets(frase,100,stdio);
    printf("Digite a palavra Busca: ");
    fgets(palavra,50,stdio);


    while(frase[i]!='\n'&&frase[i]!='\0'){
        if(frase[i]!=' '){
            if(z){
                break;
            }
            i++;
        }
        else if(frase[i]==palavra[i]){
            if(max==0){
                max = i;
                min = i;
            }else{
                max = i;
            }
            z=1;
        }
        else{
            z = 0;
        }
    }





    return 0;
}