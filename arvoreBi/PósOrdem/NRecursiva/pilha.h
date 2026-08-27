#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

typedef struct {
    No* dados[100];
    int topo;
} Pilha;

void inicializarPilha(Pilha* pilha);
int pilhaVazia(Pilha* pilha);
void empilhar(Pilha* pilha, No* no);
No* desempilhar(Pilha* pilha);
No* topoPilha(Pilha* pilha);

#endif
