#include <bits/stdc++.h>
#include "exercicio4.h"

int main(){
    int i, z, acess_identificador, status_identificador;
    char n[30];
    double a,b;

    printf("1 - Cadastrar\n2 - Acessar dados\n3 - Status do cliente\n4 - Sair");
    scanf("%d", &z);

    switch(z){
    case 1://cadastrar
        printf("Digite o identificador: \n");
        scanf("%d", &i);
        printf("Digite o nome: \n");
        scanf(" %[^\n]", n);
        printf("Leitura anterior: \n");
        scanf("%d", &a);
        printf("Leitura atual \n");
        scanf("%d", &b);

        struct clientes *cli = dados_clientes();

        break;
    case 2://acessar
        printf("Qual o identificador do cliente?\n");
        scanf("%d", &acess_identificador);


        break;
    case 3://status
        printf("Qual o identificador do cliente?\n");
        scanf("%d", &status_identificador);


        break;
    case 4://sair
        return 0
    }



    return 0;
}
