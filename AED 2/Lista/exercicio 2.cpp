#include<bits/stdc++.h>
/////////////////////////////////////////////////////////////////////////////////
typedef struct Nodo {
	int numero;
    struct Nodo *pProximo;
};
struct Nodo *pInicio=NULL;
/////////////////////////////////////////////////////////////////////////////////
void remover(struct Nodo* pNodo){
    if(pInicio!=NULL){
        if(pNodo==pInicio){
            pInicio=pNodo->pProximo;
        }else{
            struct Nodo *pAtual=pInicio;
            struct Nodo *pAnterior=NULL;
            while(pAtual!=pNodo&&pAtual!=NULL){
                pAnterior=pAtual;
                pAtual=pAtual->pProximo;
            }
            if(pAtual==NULL){
                printf("O Elemento nao foi encontrado na lista!\n");
            }else{
                pAnterior->pProximo=pAtual->pProximo;
            }
        }
    }
    else{
        printf("A lista esta vazia\n");
    }
}
/////////////////////////////////////////////////////////////////////////////////
void imprimir(){
    if(pInicio==NULL)
        printf("A lista est� vazia!\n");
    else{
        struct Nodo*pAtual=pInicio;
        while(pAtual!=NULL){
            printf("%d\n",pAtual->numero);
            pAtual=pAtual->pProximo;
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////
void inserir(struct Nodo* pNodo){
    if(pInicio==NULL)
        pInicio=pNodo;
    else{
        struct Nodo* pFim=pInicio;
        while(pFim->pProximo!=NULL){
            pFim=pFim->pProximo;
        }
        pFim->pProximo=pNodo;
    }
    pNodo->pProximo=NULL;
}
/////////////////////////////////////////////////////////////////////////////////
//void inserirqqPosicao(struct Nodo* pNodo, struct Nodo* pNodoAnterior){

//}
/////////////////////////////////////////////////////////////////////////////////
int main(){
    int x, y;

    do{
        printf("1-Inserir\n2-Remover\n3-Imprimir lista\n4-Mostrar quantos elementos tem na lista\n5-Sair\n");
        scanf("%d", &x);

        switch(x){
        case 1:
        
            printf("Qual posicao voce deseja adicionar? \n");
            scanf("%d", &y);

            printf("Digite o numero a ser adicionado: \n");
            //scanf("%d",);

            //inserirqqPosicao();
            break;
        case 2:
            printf("Digite a posicao a ser removida");
            //remover();
            break;
        case 3:
            imprimir();
            break;
        case 4:
            printf("A lista possui %d elementos" );
        }
    }while(x!=5);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////