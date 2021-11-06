#include <bits/stdc++.h>
#include "exercicio 4.h"

clientes* dados_clientes(int ident, char name[], double atual, double anterior){
    clientes *x=(clientes *)malloc(sizeof(clientes));
    x->identificador = ident;
    x->nome[] = name;
    x->leitura_atual = atual;
    x->leitura_anterior = anterior;
    return x;
}
