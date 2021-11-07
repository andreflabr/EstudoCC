#include <bits/stdc++.h>
#include "exercicio 4.h"
cli *dados_clientes(int ident, char name[], double atual, double anterior){
    clientes *x=(clientes *)malloc(sizeof(clientes));
    if(x == NULL){
        printf("\nMemoria cheia!\n");
    }
    x->identificador = ident;
    strcpy (x->nome, name);
    x->leitura_atual = atual;
    x->leitura_anterior = anterior;

    return x;
}
void acessar(cli *x){
        printf("Identificador: %d\n", x->identificador);
        printf("Nome: %s\n", x->nome);
        printf("Leitura anterior: %.1lf\n", x->leitura_anterior);
        printf("Leitura atual: %.1lf\n", x->leitura_atual);
}
void liber(cli *x){
    free(x);
}
void stats(cli *x){
    double percentual;

    percentual= x->leitura_atual*100;
    percentual= percentual/x->leitura_anterior;
    if(percentual>=110){
        printf("\nSTATUS: Alerta\n\n");
    }else if((percentual >= 90) && (percentual <= 109)){
        printf("\nSTATUS: Estavel\n\n");
    }else if(percentual < 90){
        printf("\nSTATUS: Economico\n\n");
    }
}
