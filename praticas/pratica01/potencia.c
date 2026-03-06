#include <stdio.h>

int main(){
    float base;
    int expoente;
    int x = 0;
        printf("Qual a base: ");
        x = scanf("%f",&base);
        while(getchar()!='\n');
        if(x!=1){
            printf("Base invalida.\n");
        }
        printf("Qual o expoente: ");
        scanf("%f",&base);
        while(getchar()!='\n');
        if(x!=1){
            printf("Expoente invalida.\n");
        }
    float resultado = 1;
    if(expoente>0){    
        for(int i = 0; i<expoente;i++){
            resultado=resultado*base;
        }
    }else if(expoente<0){
        for(int i = 0; i<expoente;i++){
            resultado=resultado/base;
        }
    }
    printf("O resultado e %.2f", resultado);
}