#include <stdio.h>
#include "arvore.h"
#include "pilha.h"

No* criarNo(int valor) {
    No* novo = (No*)malloc(sizeof(No));

    if (novo != NULL) {
        novo->info = valor;
        novo->esq = NULL;
        novo->dir = NULL;
    }

    return novo;
}

void posOrdem(No* raiz) {
    if (raiz == NULL) {
        return;
    }

    Pilha pilha;
    inicializarPilha(&pilha);
    No* atual = raiz;
    No* ultimoVisitado = NULL;

    while (atual != NULL || !pilhaVazia(&pilha)) {
        if (atual != NULL) {
            empilhar(&pilha, atual);
            atual = atual->esq;
        } else {
            No* topo = topoPilha(&pilha);

            if (topo->dir != NULL && topo->dir != ultimoVisitado) {
                atual = topo->dir;
            } else {
                printf("%d ", topo->info);
                ultimoVisitado = desempilhar(&pilha);
            }
        }
    }
}