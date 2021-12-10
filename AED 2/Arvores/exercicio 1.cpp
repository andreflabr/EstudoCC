#include<bits/stdc++.h>
/////////////////////////////////////////////////////////////////////////////
struct no{
    struct no *esq;
    struct no *dir;
    char dado;
};
typedef struct no *Arvore;
/////////////////////////////////////////////////////////////////////////////
void insertNode(Arvore *t, char d){
    if (*t == NULL){
        *t = (struct no*) malloc(sizeof(struct no));
        if ( *t != NULL ){
            (*t)->esq = NULL;
            (*t)->dir = NULL;
            (*t)->dado = d;
            printf("dado: %c\n",(*t)->dado);
        }else
            printf("Memoria insuficiente");
    }else if (d < (*t)->dado)
        insertNode(&(*t)->esq, d);
    else if (d > (*t)->dado)
        insertNode(&(*t)->dir, d);
    else
        printf("Duplicacao de no");
}
/////////////////////////////////////////////////////////////////////////////
void preOrder(Arvore t){
    if (t != NULL){
        printf("%c", t->dado);
        preOrder(t->esq);
        preOrder(t->dir);
    }
}
/////////////////////////////////////////////////////////////////////////////
void inOrder(Arvore t){
    if(t != NULL){
        inOrder(t->esq);
        printf("%c", t->dado);
        inOrder(t->dir);
    }
}
/////////////////////////////////////////////////////////////////////////////
void posOrder(Arvore t){
    if(t != NULL){
        posOrder(t->esq);
        posOrder(t->dir);
        printf("%c", t->dado);
    }
}
/////////////////////////////////////////////////////////////////////////////
int nos(Arvore t){
    if(t==NULL){
        return 0;
    }
    return nos(t->esq) + nos(t->dir) + 1;
}
/////////////////////////////////////////////////////////////////////////////
int altura (Arvore t){
    int u,v;
    if(t==NULL){
        return -1;
    }
    u=altura(t->esq);
    v=altura(t->dir);
    if(u > v){
        return u+1;
    }else{
        return v+1;
    }
}
/////////////////////////////////////////////////////////////////////////////
int folhas (Arvore t){
    if(t==NULL){
        return 0;
    }
    if(t->esq ==NULL && t->dir==NULL){
        return 1;
    }
    return folhas(t->esq) + folhas(t->dir);
}
/////////////////////////////////////////////////////////////////////////////
int main(){
    Arvore A = NULL;
    int x, result_nos, result_altura, result_folhas;
    char y;

    do{
        printf("1-inserir Letra\n2-Numero de nos\n3-Altura\n4-Nos folhas\n5-Imprimir\n6-Sair\n");
        scanf("%d", &x);

        switch(x){
            case 1:
                printf("Digite a letra a adicionar:\n");
                scanf(" %c", &y);
                insertNode(&A, y);
                break;
            case 2:
                result_nos = nos(A);
                printf("Nos: %d\n", result_nos);
                break;
            case 3:
                result_altura = altura(A);
                printf("Altura: %d\n", result_altura);
                break;
            case 4:
                result_folhas = folhas(A);
                printf("Folhas: %d\n", result_folhas);
                break;
            case 5:
                printf("PreOrder\n");
                preOrder(A);
                printf("\nInOrder\n");
                inOrder(A);
                printf("\nPosOrder\n");
                posOrder(A);
                printf("\n");
                break;
        }
    }while(x!=6);
    return 0;
}