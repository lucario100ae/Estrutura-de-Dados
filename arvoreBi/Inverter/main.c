#include <stdio.h>
#include "arvore.h"

void espelharArvore(No *raiz) {
    if (raiz == NULL) return;

    // inverte as subarvores
    espelharArvore(raiz->esq);
    espelharArvore(raiz->dir);

    // inverte o nó atual
    No *temp = raiz->esq;
    raiz->esq = raiz->dir;
    raiz->dir = temp;
}