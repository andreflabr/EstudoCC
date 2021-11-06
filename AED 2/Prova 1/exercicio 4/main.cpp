#include <bits/stdc++.h>
#include "exercicio 4.h"

int main(){
    int i, z, c, acess_identificador, status_identificador;
    char n[30];
    double a,b;

    printf("1 - Cadastrar\n2 - Acessar dados\n3 - Status do cliente\n4 - Sair\n");
    scanf("%d", &z);

    do{
    switch(z){
    case 1://cadastrar
        printf("Quantos clientes serao cadastrados?\n");
        scanf("%d", &c);

        for(int i=0; i<c; i++){
            printf("Digite o identificador: \n");
            scanf("%d", &i);
            printf("Digite o nome: \n");
            scanf(" %[^\n]", n);
            printf("Leitura anterior: \n");
            scanf("%lf", &a);
            printf("Leitura atual \n");
            scanf("%lf", &b);

            struct clientes *cli = dados_clientes(i, m, b, a);
        }


        break;
    case 2://acessar
        printf("Qual o identificador do cliente?\n");
        scanf("%d", &acess_identificador);

        printf("Identificador: \n", );
        printf("Nome: \n", );
        printf("Leitura atual: \n", );
        printf("Leitura anterior: \n", );


        break;
    case 3://status
        printf("Qual o identificador do cliente?\n");
        scanf("%d", &status_identificador);



        break;
    case 4://sair
        return 0;


    }
    }while(z<=4 && z>=1);

    return 0;
}
