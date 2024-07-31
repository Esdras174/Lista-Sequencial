#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* criar_lista() {
    Lista* lista = (Lista*)malloc(sizeof(Lista));
    lista->tamanho = 0;
    return lista;
}

int esta_vazia(Lista* lista) {
    return lista->tamanho == 0;
}

int esta_cheia(Lista* lista) {
    return lista->tamanho == MAX;
}

int obter_tamanho(Lista* lista) {
    return lista->tamanho;
}

int obter_elemento(Lista* lista, int posicao, int* elemento) {
    if (posicao < 1 || posicao > lista->tamanho) return -1;
    *elemento = lista->elementos[posicao - 1];
    return 0;
}

int modificar_elemento(Lista* lista, int posicao, int elemento) {
    if (posicao < 1 || posicao > lista->tamanho) return -1;
    lista->elementos[posicao - 1] = elemento;
    return 0;
}

int inserir_elemento(Lista* lista, int posicao, int elemento) {
    if (posicao < 1 || posicao > lista->tamanho + 1 || esta_cheia(lista)) return -1;
    for (int i = lista->tamanho; i >= posicao; i--) {
        lista->elementos[i] = lista->elementos[i - 1];
    }
    lista->elementos[posicao - 1] = elemento;
    lista->tamanho++;
    return 0;
}

int retirar_elemento(Lista* lista, int posicao) {
    if (posicao < 1 || posicao > lista->tamanho) return -1;
    for (int i = posicao - 1; i < lista->tamanho - 1; i++) {
        lista->elementos[i] = lista->elementos[i + 1];
    }
    lista->tamanho--;
    return 0;
}
