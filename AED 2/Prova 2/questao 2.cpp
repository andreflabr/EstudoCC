#include<bits/stdc++.h>

typedef struct Nodo {
	int numero;
    struct Nodo *pProximo;
}Nodo;
typedef struct{
    Nodo *pInicio;
}Lista;

int tam=0;

void inserir(Lista *lista, int x){
    Nodo *novo = (Nodo *)malloc(sizeof(Nodo));
    novo->numero = x;
    novo->pProximo = lista->pInicio;
    lista->pInicio = novo;
    tam++;
}

int procurar(Lista *lista, int z){
    int j=0;
    Nodo *pInicio = lista->pInicio;
    while(pInicio != NULL){
        if(pInicio->numero == z){
            printf("Valor encontrado!\n");
        }else{
            j++;
        }
        pInicio = pInicio->pProximo;
    }
    return j;
}

void imprimir(Lista *lista){
    Nodo *pInicio = lista->pInicio;
    while(pInicio != NULL){
        printf("%d ", pInicio->numero);
        pInicio = pInicio->pProximo;
    }
    printf("\n\n");
}

int main(){
    Lista lista;
    lista.pInicio=NULL;

    int x, valor, procura, r;
    do{
        printf("1-inserir\n2-imprimir\n3-procurar\n4-sair\n");
        scanf("%d", &x);
        switch(x){
            case 1:
                printf("Digite o valor a ser inserido: \n");
                scanf("%d", &valor);
                inserir(&lista, valor);
                break;
            case 2:
                imprimir(&lista);
            case 3:
                printf("Digite o valor a ser procurado: \n");
                scanf("%d", &procura);
                r = procurar(&lista, procura);
                if(r == tam){
                    printf("Valor nao encontrado na lista!\n");
                }
        }
    }while(x!=4);
    return 0;
}
