#include <stdio.h>
#include "arvore.h"

void posOrdem(No* raiz);

int main() {
    No* raiz = criarNo(1);
    raiz->esq = criarNo(2);
    raiz->dir = criarNo(3);
    raiz->esq->esq = criarNo(4);
    raiz->esq->dir = criarNo(5);
    raiz->dir->esq = criarNo(6);
    raiz->dir->dir = criarNo(7);

    printf("Pos-Ordem: ");
    posOrdem(raiz);
    printf("\n");

    return 0;
}
