#include "arvore.h"

int Cheia(const No* raiz)
{
	if (raiz == NULL) {
		return 1;
	}

	if ((raiz->esq == NULL) != (raiz->dir == NULL)) {
		return 0;
	}

	return Cheia(raiz->esq) && Cheia(raiz->dir);
}