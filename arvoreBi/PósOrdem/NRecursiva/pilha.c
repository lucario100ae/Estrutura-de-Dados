#include "pilha.h"

void inicializarPilha(Pilha* pilha) {
    pilha->topo = -1;
}

int pilhaVazia(Pilha* pilha) {
    return pilha->topo == -1;
}

void empilhar(Pilha* pilha, No* no) {
    if (pilha->topo < 99) {
        pilha->dados[++pilha->topo] = no;
    }
}

No* desempilhar(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        return NULL;
    }

    return pilha->dados[pilha->topo--];
}

No* topoPilha(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        return NULL;
    }

    return pilha->dados[pilha->topo];
}
