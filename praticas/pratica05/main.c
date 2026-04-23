#include <stdio.h>
#include <stdlib.h>
#include "selecao.h"

void imprimir_vetor(int v[], int n){
    printf("[");
    for(int i = 0; i<n-1; i++){
        printf("%i, ", v[i]);
    }
    printf("%i]\n", v[n-1]);
}

int main(){
    int v[100], achou, valor;
    for(int i = 0; i<100; i++){
        v[i] = (rand()%1000);
    }
    valor = quick_select(v, 0, 99, 33);
    printf("Na posicao 33 esta o valor: %i\n", valor);

    achou = linear_search(v, 100, valor);
    printf("O valor: %i esta na posicao: %i\n", valor, achou);



    valor = quick_select(v, 0, 99, 8);
    printf("Na posicao 8 esta o valor: %i\n", valor);

    achou = linear_search(v, 100, valor);
    printf("O valor: %i esta na posicao: %i\n", valor, achou);

    
    valor = quick_select(v, 0, 99, 47);
    printf("Na posicao 47 esta o valor: %i\n", valor);

    achou = linear_search(v, 100, valor);
    printf("O valor: %i esta na posicao: %i\n", valor, achou);

    imprimir_vetor(v, 100);


    return 0;
}