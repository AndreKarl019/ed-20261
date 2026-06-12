#include <stdio.h>
#include "max_heap.h"

void imprimir(MaxHeap *raiz){
    int posicao = 0;
    while(posicao<raiz->tamanho){
        printf("%i, ", raiz->dados[posicao]);
        posicao++;
    }
    printf("\n");
}

int main(){
    MaxHeap *heap = criar(100);
    
    inserir(heap, 20);
    imprimir(heap);
    
    inserir(heap, 40);
    imprimir(heap);
    
    inserir(heap, 18);
    imprimir(heap);
    
    inserir(heap, 30);
    imprimir(heap);
    
    inserir(heap, 60);
    imprimir(heap);
    
    inserir(heap, 90);
    imprimir(heap);

    while(heap->tamanho!=0){
        printf("Removi o %i\n", remover(heap));
        imprimir(heap);
    }


    return 0;
}