#include <bits/stdc++.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int inicio = 0, fim = 0;
#define MAX 5
int *f;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void enqueue(int valor){
    if(fim < MAX){
        f[fim] = valor;
        printf("%d entrou na fila\n",f[fim]);
        fim++;
    }else{
        printf("Fila cheia\n");
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int denqueue(){
    int r;

    if(fim > 0){
        r=f[inicio];
        inicio++;
        return r;
    }else{
        printf("Fila vazia!\n");
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
    int x, y, z;

    f=(int *)malloc(MAX*sizeof(int));
    do{
        printf("1- Inserir\n2- Remover\n3- Imprimir primeiro da fila\n4- Imprimir ultimo da fila\n5- Mostrar quantos elementos tem na fila\n6- Sair\n");
        scanf("%d", &x);
        switch(x){
            case 1:
                printf("Digite o numero a ser inserido: \n");
                scanf("%d", &z);
                enqueue(z);
                break;
            case 2:
                y=denqueue();
                printf("O numero retirado foi: %d\n", y);
                break;
            case 3:
                printf("Primeiro numero: %d\n", f[fim-1]);
                break;
            case 4:
                printf("Ultimo numero: %d\n", f[inicio]);
                break;
            case 5:
                printf("Elementos na fila: %d\n", fim);
                break;
        }
    }while(x!=6);

    free(f);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
casos testes:
1
66
1
55
1
44
1
33
1
22
1
11
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////