#ifndef ARVORE_H
#define ARVORE_H

#include <stdlib.h>

typedef struct No {
    int info;
    struct No* esq;
    struct No* dir;
} No;

No* criarNo(int valor);

#endif