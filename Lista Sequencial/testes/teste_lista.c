#include <assert.h>
#include "lista.h"

void testar_operacoes() {
    Lista* lista = criar_lista();
    assert(esta_vazia(lista) == 1);
    assert(obter_tamanho(lista) == 0);

    assert(inserir_elemento(lista, 1, 10) == 0);
    assert(esta_vazia(lista) == 0);
    assert(obter_tamanho(lista) == 1);

    int elemento;
    assert(obter_elemento(lista, 1, &elemento) == 0);
    assert(elemento == 10);

    assert(inserir_elemento(lista, 2, 20) == 0);
    assert(inserir_elemento(lista, 3, 30) == 0);
    assert(obter_tamanho(lista) == 3);

    assert(modificar_elemento(lista, 2, 25) == 0);
    assert(obter_elemento(lista, 2, &elemento) == 0);
    assert(elemento == 25);

    assert(retirar_elemento(lista, 2) == 0);
    assert(obter_tamanho(lista) == 2);
    assert(obter_elemento(lista, 2, &elemento) == 0);
    assert(elemento == 30);

    free(lista);
}

int main() {
    testar_operacoes();
    printf("Todos os testes passaram.\n");
    return 0;
}
