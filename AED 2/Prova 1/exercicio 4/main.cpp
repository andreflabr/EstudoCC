#include <bits/stdc++.h>
#include "exercicio 4.h"

int main(){
    cli *cliente1;

    int z, i, x=1;
    double a, b;
    char n[25];


    while(x){
    if(x==1){
        printf("1 - Cadastrar\n2 - Acessar dados\n3 - Status do cliente\n4 - liberar memoria e sair\n");
        scanf("%d", &z);
    }


    switch(z){
    case 1://cadastrar

            printf("Digite o identificador: \n");
            scanf("%d", &i);
            printf("Digite o nome: \n");
            scanf(" %[^\n]", n);
            printf("Leitura anterior: \n");
            scanf("%lf", &a);
            printf("Leitura atual \n");
            scanf("%lf", &b);

            cliente1 = dados_clientes(i, n, b, a);

            x=1;

        break;
    case 2://acessar

        acessar(cliente1);

        break;
    case 3://status

        stats(cliente1);

        break;

    case 4://sair e liberar

        liber(cliente1);
        return 0;
    }
    }

liber(cliente1);

return 0;
}
