#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

struct senha{
    int numero;
    struct senha *prox;
};

struct fila{
    struct senha *inicio;
    struct senha *fim;
    int qtd;
};

typedef struct senha Senha;
static int cont = 0;

Fila* criar_Fila(){
    Fila *fi = (Fila*) malloc(sizeof(Fila));

    if(fi != NULL){
        fi->inicio = NULL;
        fi->fim = NULL;
        fi->qtd = 0;
    }
    return fi;
}

int gera_Senha(Fila* fi){

    if(fi == NULL)
        return 0;

    cont++;
    Senha *x = (Senha*) malloc(sizeof(Senha));

    if(x == NULL)
        return 0;

    x->numero = cont;
    x->prox  = NULL;

    if(fi->inicio == NULL)
        fi->inicio = x;
    else
        fi->fim->prox = x;

    fi->fim = x;
    fi->qtd++;
    return 1;


}

int remove_Fila(Fila *fi){

    if(fi == NULL)
        return 0;

    if(fi->inicio == NULL)
        return 0;

    Senha *aux = fi->inicio;
    fi->inicio = fi->inicio->prox;

    if(fi->inicio == NULL)
        fi->fim = NULL;

    free(aux);
    fi->qtd--;
    return 1;

}

void imprime_Fila(Fila *fi){

    Senha *aux = fi->inicio;
    printf("\nFila : ");
    while(aux != NULL){
        if(aux->prox == NULL)
            printf("%d ;",aux->numero);
        else
            printf("%d , ",aux->numero);
        aux = aux->prox;
    }


}

