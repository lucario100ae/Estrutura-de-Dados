#ifndef ARVORE_H
#define ARVORE_H

#include <stdlib.h>

// Estrutura de um Nó da Árvore Binária
typedef struct No {
    int info;           // Dado armazenado no nó
    struct No* esq; // Ponteiro para o filho à esquerda
    struct No* dir;  // Ponteiro para o filho à direita
} No;

// Função para alocar e criar um novo nó
No* criarNo(int valor);

#endif
