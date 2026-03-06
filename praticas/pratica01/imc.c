#include <stdio.h>

int main(){
    float peso, altura, imc;
    int teste = 0;
    while(teste==0){
        printf("Qual o seu peso(Kg): ");
        scanf("%f",&peso);
        if(peso>0){
            teste = 1;
        }else{
            printf("Peso precisa ser maior que 0.\n");
        }
    }
    teste = 0;
    while(teste==0){
        printf("Qual a sua altura(cm):");
        scanf("%f", &altura);
        if(altura>0){
            teste = 1;
        }else{
            printf("Altura precisa ser maior que 0.\n");
        }
    }
    imc = peso/((altura/100)*(altura/100));
    if(imc<18.5){
        printf("Abaixo do peso.\n");
    } else if(imc<24.9){
        printf("Peso normal.\n");
    } else if(imc<29.9){
        printf("Sobrepeso.\n");
    }else{
        printf("Obesidade.\n");
    }
}