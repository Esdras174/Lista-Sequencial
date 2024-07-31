#include <stdio.h>
#include "lista.h"

int main() {
    Lista* lista = criar_lista();
    
    inserir_elemento(lista, 1, 10);
    inserir_elemento(lista, 2, 20);
    inserir_elemento(lista, 3, 30);

    int elemento;
    obter_elemento(lista, 2, &elemento);
    printf("Elemento na posição 2: %d\n", elemento);

    modificar_elemento(lista, 2, 25);
    obter_elemento(lista, 2, &elemento);
    printf("Elemento modificado na posição 2: %d\n", elemento);

    retirar_elemento(lista, 2);
    obter_elemento(lista, 2, &elemento);
    printf("Elemento na nova posição 2: %d\n", elemento);

    free(lista);
    return 0;
}
