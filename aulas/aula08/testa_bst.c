#include <stdio.h>
#include "arvore_bst.h"

int main(){
    No *raiz = criar(50);
    
    inserir(raiz, 30);
    inserir(raiz, 30);
    inserir(raiz, 70);
    inserir(raiz, 20);
    inserir(raiz, 40);
    inserir(raiz, 60);
    inserir(raiz, 80);

    No *no = buscar(raiz, 60);

    if(no != NULL){
        printf("Achei o 60 no no %X\n", no);
    }else{
        printf("nao achei!\n");
    }

    no = buscar(raiz, 45);

    if(no != NULL){
        printf("Achei o 45 no no %X\n", no);
    }else{
        printf("nao achei!\n");
    }

    printf("\n\nPre ordem:\n");
    pre_ordem(raiz);

    printf("\n\nEm ordem:\n");
    em_ordem(raiz);

    printf("\n\nPos ordem:\n");
    pos_ordem(raiz);


    return 0;
}