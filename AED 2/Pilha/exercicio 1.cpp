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

void pop(){
    topo=topo-1;
    printf("elemento %d removido\n", pilha[topo]);
}

void imprime_pilha(){
    for(int i=topo-1; i>=0; i--){ 
            printf("%d\n", pilha[i]);
    }
}

int main(){

    push(10); //10 
    push(7); //10,7
    push(5); //10,7,5

    imprime_pilha();

    pop();
    imprime_pilha();    
    pop();
    imprime_pilha();
    pop();
    imprime_pilha();


}
