#include <stdlib.h>
#include "pilha.h"

Pilha *criar(){
    Pilha *pilha = (Pilha*)malloc(sizeof(Pilha));
    
    if(pilha==NULL){
        return NULL;
    }

    pilha->topo = NULL;
    pilha->quantidade = 0;
    return pilha;
}

int pilha_vazia(Pilha *pilha){
    return pilha!=NULL&&pilha->topo==NULL;
}

No *pilha_topo(Pilha *pilha){
    return pilha->topo;
}

void empilhar(Pilha *pilha, int valor){
    No *no = (No *)malloc(sizeof(No));
    no->dados = valor;
    no->proximo= pilha->topo;
    pilha->topo = no;
    pilha->quantidade++;
    return;
}

void desempilhar(Pilha *pilha){
    No *topo = pilha_topo(pilha);
    pilha->topo = topo->proximo;
    pilha->quantidade--;
    free(topo);
    return;
}

void destruir(Pilha *pilha){
    free(pilha);
    return;
}
