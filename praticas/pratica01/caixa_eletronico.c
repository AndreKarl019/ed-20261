#include <stdio.h>
#include <stdlib.h>

int main(){
    int saque, celula200, celula100, celula50, celula20, celula10, celula5, celula2;
    printf("Qual o valor do saque: ");
    scanf("%i",&saque);
    if(saque>1000){
        printf("Saque excede o limite!\n");
        exit(1);
    }
    if(saque<0){
        printf("Saque invalido!\n");
        exit(1);
    }
    int total = saque;
    celula200 = saque/200;
    saque = saque%200;
    celula100 = saque/100;
    saque = saque%100;
    celula50 = saque/50;
    saque = saque%50;
    celula20 = saque/20;
    saque = saque%20;
    celula10 = saque/10;
    saque = saque%10;
    celula5 = saque/5;
    saque = saque%5;
    celula2 = saque/2;
    saque = saque%2;
    printf("A menor quantia de notas eh: %i notas de 200, %i notas de 100, %i notas de 50, %i notas de 20, %i notas de 10, %i notas de 5, %i notas de 2", celula200, celula100, celula50, celula20, celula10, celula5, celula2);
}