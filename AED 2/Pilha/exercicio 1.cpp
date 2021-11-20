#include <bits/stdc++.h>

int topo = 0; 
#define MAX 3 
int pilha[MAX];

void push(int valor){
    if(topo < MAX ){
        pilha[topo] = valor; 
        topo++; 
    } else {
        printf("pilha cheia\n");
    }
}


int pop(){
    
}

void imprime_pilha(int aux){
    if(aux>=0){
        printf("%d\n", pilha[aux]);
        imprime_pilha(aux-1);
    }  
}

int main(){
    int x;

    push(10); //10 - OK
    push(7); //10,7 - OK
    push(5); //10,7,5  - OK
    push(8); //10,7,5 - PILHA CHEIA

    printf("\n1 - Remover topo da pilha\n2 - Imprimir\n3 - Sair\n");
    scanf("%d", &x);

    do{
    switch(x){
        case 1:
            pop();
            break;
        case 2:
            imprime_pilha(MAX);
            break;
        }
    }while(x != 3);


    return 0;
}
