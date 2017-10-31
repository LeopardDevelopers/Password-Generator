#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(){

    Fila* fiN;
    Fila* fiP;

    fiN = criar_Fila();
    fiP = criar_Fila();
    int resp;

    printf("----------- BEM VINDO! -----------\n\n");

    do{
        printf("\nDIGITE 1 PARA GERAR UMA SENHA;\n"
            "DIGITE 2 PARA GERAR UMA SENHA PREFERENCIAL;\n"
            "DIGITE 3 PARA SAIR;\n\n");
        scanf("%d",&resp);
        if(resp == 1)
            gera_Senha(fiN);
        else if(resp == 2)
            gera_Senha_Preferencial(fiP);
    }
    while(resp == 1 || resp == 2);

    imprime_Fila(fiN);
    imprime_Fila_Preferencial(fiP);

}
