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
int filhos(Arvore t, char letra){
    if(t==NULL){
        return 0;
    }
    filhos(t->esq, letra);
    filhos(t->dir, letra);

    if(t->dado == letra){
        if(t->esq != NULL){
            printf("%c\n", t->esq->dado);
        }
        if(t->dir != NULL){
            printf("%c\n", t->dir->dado);
        }
        return 0;
    }
}
/////////////////////////////////////////////////////////////////////////////
int main(){
    Arvore A = NULL;
    int x, result_nos, result_altura, result_folhas;
    char y, z;

    do{
        printf("1-inserir Letra\n2-Filhos do no\n3-Sair\n");
        scanf("%d", &x);

        switch(x){
            case 1:
                printf("Digite a letra a adicionar:\n");
                scanf(" %c", &y);
                insertNode(&A, y);
                break;
            case 2:
                printf("Digite a letra: \n");
                scanf(" %c", &z);
                filhos(A, z);
                break;
        }
    }while(x!=3);
    return 0;
}