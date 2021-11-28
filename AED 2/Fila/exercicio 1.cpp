#include<bits/stdc++.h>
//////////////////////////////////////////////////////////////////////////////////////////////
struct banco{
    int identificador, posicao, idade, categoria;
    char nome[40], deficiencia;
};
#define MAX 3
struct banco v[MAX], temporario;
int inicio=0, fim=0, i;
//////////////////////////////////////////////////////////////////////////////////////////////
int denqueue(void){
    int t;
    if(fim!=0){
        t=inicio;
        inicio++;
        return t;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////
int verificar(){
    int i=fim-1;
    if(v[i].categoria>temporario.categoria){
        while(v[i].categoria>temporario.categoria && i>=inicio){
            i--;
        }
    }else if(v[i].categoria<temporario.categoria){
        i=fim-1;
    }
    return i+1;
}
//////////////////////////////////////////////////////////////////////////////////////////////
void enqueue(){
    int p;
    temporario.posicao = fim;
    printf("\nIdentificador: \n");
    scanf("%d", &temporario.identificador);
    printf("Posicao: \n");
    scanf("%d", &temporario.posicao);
    printf("Idade: \n");
    scanf("%d", &temporario.idade);
    printf("Nome: \n");
    scanf(" %[^\n]", temporario.nome);
    printf("deficiente: (s/n)\n");
    scanf(" %[^\n]", temporario.deficiencia);

    if(temporario.deficiencia == 's'){
        if(temporario.idade >60){
            temporario.categoria=1;
        }else{
            temporario.categoria=2;
        }
    }
    else{
        if(temporario.idade>60){
            temporario.categoria=3;
        }else{
            temporario.categoria=4;
        }
    }
    if(fim==0){
        v[fim].identificador = temporario.identificador;
        v[fim].posicao = temporario.posicao;
        v[fim].idade = temporario.idade;
        v[fim].deficiencia = temporario.deficiencia;
        v[fim].categoria = temporario.categoria;
        strcpy(v[fim].nome, temporario.nome);
        fim++;
    }else{
        p = verificar();
        printf("%d\n", p);
        for(i=fim; i>p; i--){
            v[i].identificador = v[i-1].identificador;
            v[i].posicao = v[i-1].posicao;
            v[i].idade = v[i-1].idade;
            v[i].deficiencia = v[i-1].deficiencia;
            v[i].categoria = v[i-1].categoria;
            strcpy(v[i].nome, v[i-1].nome);
        }
        v[p].identificador = temporario.identificador;
        v[p].posicao = temporario.posicao;
        v[p].idade = temporario.idade;
        v[p].deficiencia = temporario.deficiencia;
        v[p].categoria = temporario.categoria;
        strcpy(v[p].nome, temporario.nome);
        fim++;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////
void imprimir(void){
    for(i=inicio; i<fim; i++){
        printf("Nome: %s, idade: %d, deficiencia: %c\n", v[i].nome, v[i].idade, v[i].deficiencia);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////
int main(){
    int x, y;

    do{
        printf("1 - Inserir | 2 - Remover | 3 - Imprimir | 4 - Primeiro da fila | 5 - Sair\n");
        scanf("%d", &x);
        switch(x){
        case 1:
            enqueue();
            break;
        case 2:
            y = denqueue();
            printf("Retirado identificador %d, de nome %s\n", v[y].identificador, v[y].nome);
            break;
        case 3:
            imprimir();
            break;
        case 4:
            printf("Nome: %s, idade: %d, deficiencia: %c\n", v[inicio].nome, v[inicio].idade, v[inicio].deficiencia );
        }
    }while(x!=5);

return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////
/*
casos testes:

1
11
1
60
andre
s

1
22
2
60
joao
n

1
33
3
50
cleber
s

1
44
4
20
ana
n


*/
