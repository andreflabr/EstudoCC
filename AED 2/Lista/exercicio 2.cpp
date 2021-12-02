#include<bits/stdc++.h>
/////////////////////////////////////////////////////////////////////////////////
typedef struct Nodo {
	int numero;
    struct Nodo *pProximo;
};
struct Nodo *pInicio=NULL;
/////////////////////////////////////////////////////////////////////////////////
void remover(int e){

    bool flag=false;
    struct Nodo *pAtual=pInicio;

    if(pInicio!=NULL){
        if(e==pInicio->numero){
            pInicio=pAtual->pProximo;
            free(pAtual);
        }else{
            struct Nodo *pAtual=pInicio;
            struct Nodo *pAnterior=NULL;
            while(pAtual != NULL && flag != true){
                if(pAtual->numero != e){
                    pAnterior = pAtual;
                    pAtual=pAtual->pProximo;
                }else {
                    flag=true;
                }
            }
            if(pAtual==NULL){
                printf("O Elemento nao foi encontrado na lista!\n");
            }else{
                pAnterior->pProximo=pAtual->pProximo;
                free(pAtual);
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
        printf("A lista esta vazia!\n");
    else{
        struct Nodo *pAtual=pInicio;
        while(pAtual!=NULL){
            printf("%d\n",pAtual->numero);
            pAtual=pAtual->pProximo;
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////
int inserir(struct Nodo* pNodo, int pos){
    if(pInicio==NULL){
        if(pos!=1){
            return 0;
        }
        if(pNodo==NULL){
            return 0;
        }
        pNodo->pProximo=NULL;
        pInicio=pNodo;
        return 1;
    }
    if(pos==1){
        if(pNodo==NULL){
            return 0;
        }
        pNodo->pProximo=pInicio;
        pInicio=pNodo;
        return 1;
    }
    struct Nodo *aux;
    aux=pInicio;
    int n=1;
    while(n<pos-1 && aux!=NULL){
        aux=aux->pProximo;
        n++;
    }
    if(aux==NULL){
        return 0;
    }
    if(pNodo==NULL){
        return 0;
    }
    pNodo->pProximo=aux->pProximo;
    aux->pProximo=pNodo;
    return 1;
}
/////////////////////////////////////////////////////////////////////////////////
int lista(){
    int cont=0;
    if(pInicio==NULL){
        printf("A lista esta vazia!\n");
    }else{
        struct Nodo *pAtual=pInicio;
        while(pAtual!=NULL){
            pAtual=pAtual->pProximo;
            cont++;
        }
    }
    return cont;
}
/////////////////////////////////////////////////////////////////////////////////
int main(){
    struct Nodo *nod;
    int x, p, c, elem, teste;

    do{
        printf("1-Inserir\n2-Remover\n3-Imprimir lista\n4-Mostrar quantos elementos tem na lista\n5-Sair\n");
        scanf("%d", &x);

        switch(x){
        case 1:
            nod=(struct Nodo*)malloc(sizeof(struct Nodo));
            printf("Qual posicao voce deseja adicionar? \n");
            scanf("%d", &p);

            printf("Digite o numero a ser adicionado: \n");
            scanf("%d", &nod->numero);

            teste = inserir(nod,p);

            if(teste=0){
                printf("Posição invalida, teste novamente com outra posição!\n");
            }else {
                printf("Inserido!");
            }
            break;
        case 2:
            printf("Digite o elemento a ser removida");
            scanf("%d", &elem);

            remover(elem);
            break;
        case 3:
            imprimir();
            break;
        case 4:
            c=lista();
            printf("A lista possui %d elementos", c);
        }
    }while(x!=5);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////