#ifndef LISTA_H
#define LISTA_H

#define MAX 100

typedef struct {
    int elementos [MAX];
    int tamanho;
} Lista;

Lista* criar_lista();
int esta_vazia(Lista* lista);
int esta_cheia(Lista* lista);
int obter_tamanho(Lista* lista);
int obter_elemento(Lista* lista, int posicao, int* elemento);
int modificar_elemento(Lista* lista, int posicao, int elemento);
int inserir_elemento(Lista* lista, int posicao, int elemento);
int retirar_elemento(Lista* lista, int posicao);

#endif
