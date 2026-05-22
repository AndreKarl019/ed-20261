#ifndef FILA_H
#define FILA_H

typedef struct No{
    int dados;
    struct No *proximo;
} No;

typedef struct {
    No *primeiro;
    No *ultimo;
    int quantidade;
} Fila;

Fila *criar();
int fila_vazia(Fila *fila);
void enfileirar(Fila *fila, int valor);
void desenfileirar(Fila *fila);
void destruir(Fila *fila);


#endif