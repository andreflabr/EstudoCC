#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////
struct Nodo {
    int num;
    struct Nodo *pProximo;
};
////////////////////////////////////////////////////////////////////////////////////////////////
struct Nodo *pInicio = NULL;
struct Nodo *pAux;
////////////////////////////////////////////////////////////////////////////////////////////////
void push(){
    struct Nodo *pNodo = (Nodo *)malloc(sizeof(struct Nodo));

    printf("Digite um numero\n");
    scanf("%d", &pNodo->num);

	pNodo->pProximo = pInicio;
	pInicio = pNodo;
}
////////////////////////////////////////////////////////////////////////////////////////////////
void pop(){
	if(pInicio == NULL){
		printf("A pilha esta vazia!\n");
	} else {
		pInicio = pAux->pProximo;
        free (pAux);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////
void imprimir(struct Nodo *pNodo) {
    if ( pNodo != NULL ) {
        printf("Numero: %d\n", pNodo->num);
    } else {
        printf("Vazio\n");
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
    int x;
    do{
        printf("1-inserir\n2-remover\n3-mostrar\n4-sair\n");
        scanf("%d", &x);
        
        switch(x){
            case 1:
                push();
                break;
            case 2:
                pAux = pInicio;
                pop();
                break;
            case 3:
                imprimir(pInicio);
                break;
        }
    }while(x != 4);
}
////////////////////////////////////////////////////////////////////////////////////////////////