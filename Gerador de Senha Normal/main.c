#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(){

    Fila* fi;
    fi = criar_Fila();
    int resp;

    printf("----------- BEM VINDO! -----------\n\n");

    do{
        printf("\nDIGITE 1 PARA GERAR UMA SENHA;\n"
            "DIGITE 2 PARA SAIR;\n\n");
        scanf("%d",&resp);
        if(resp == 1)
            gera_Senha(fi);
    }
    while(resp == 1);

    imprime_Fila(fi);

}
