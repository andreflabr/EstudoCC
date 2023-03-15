#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*====================================================================================================*/ //revisada

// Estrutura que representa um municipio
typedef struct{
    char nome[50];
    int area, populacao;
}Municipio;

// No da arvore AVL
typedef struct no{
    Municipio *municipio;    //Municipio M maiusculo é meu tipo novo tipo de dado, o de M minusculo é o nome da variavel
    struct no *esquerda, *direita;
    int altura;
}No;

/*====================================================================================================*/ //revisada

// função que vai criar um novo no
No* novo_no(Municipio *municipioR){

    No *novo = (No*)malloc(sizeof(No)); // problema na hora de alocar a memoria
    if(novo){
        novo->municipio = municipioR;
        novo->esquerda = NULL;
        novo->direita = NULL;
        novo->altura = 0;
    }
    else{
        cout << "\nERRO ao alocar memoria para um novo no!" << endl;
    }
    return novo;
}

/*====================================================================================================*/ //revisada

// retorna a altura de 2 nos
int maior(int a, int b){
    return (a > b)? a: b;
}

/*====================================================================================================*/ //revisada

// Funcao que retorna a altura de um no
int altura(No *no) {
    if(no == NULL){
        return -1;
    }
    else{
        return no->altura;
    }
}

/*====================================================================================================*/ //revisada

// Funcao que calcula o fator de balanceamento de um no
int fatorDeBalanceamento(No *no) {
    if(no){
        return (altura(no->esquerda) - altura(no->direita));
    }
    else{
        return 0;
    }
}

/*====================================================================================================*/ //revisada

No* rotacaoDireita(No *rotacao) {
    No *y, *f;

    y = rotacao->esquerda;
    f = y->direita;

    y->direita = rotacao;
    rotacao->esquerda = f;

    rotacao->altura = maior(altura(rotacao->esquerda), altura(rotacao->direita)) + 1;
    y->altura = maior(altura(y->esquerda), altura(y->direita)) + 1;

    return y;
}

/*====================================================================================================*/ //revisada

// Funcao que rotaciona para a esquerda um no desbalanceado
No* rotacaoEsquerda(No *rotacao) {
    No *y, *f;

    y = rotacao->direita;
    f = y->esquerda;

    y->esquerda = rotacao;
    rotacao->direita = f;

    rotacao->altura = maior(altura(rotacao->esquerda), altura(rotacao->direita)) + 1;
    y->altura = maior(altura(y->esquerda), altura(y->direita)) + 1;

    return y;
}

/*====================================================================================================*/ //revisada

No* rotacaoEsquerdaDireita(No *rotacao){
    rotacao->esquerda = rotacaoEsquerda(rotacao->esquerda);
    return rotacaoDireita(rotacao);
}

/*====================================================================================================*/ //revisada

No* rotacaoDireitaEsquerda(No *rotacao){
    rotacao->direita = rotacaoDireita(rotacao->direita);
    return rotacaoEsquerda(rotacao);
}

/*====================================================================================================*/ //revisada

No* balanceamento(No *raiz){
    int fb = fatorDeBalanceamento(raiz);

    //rotacao esquerda
    if(fb < -1 && fatorDeBalanceamento(raiz->direita) <= 0){
        raiz = rotacaoEsquerda(raiz);
    }
    //rotacao direita
    else if (fb > 1 && fatorDeBalanceamento(raiz->esquerda) >= 0){
        raiz = rotacaoDireita(raiz);
    }
    //rotacao dupla esquerda
    else if (fb > 1 && fatorDeBalanceamento(raiz->esquerda) < 0){
        raiz = rotacaoEsquerdaDireita(raiz);
    }
    //rotacao dupla direita
    else if(fb < -1 && fatorDeBalanceamento(raiz->direita) > 0){
        raiz = rotacaoDireitaEsquerda(raiz);
    }

    return raiz;
}

/*====================================================================================================*/ //revisada

// Funcao recursiva que insere um no na arvore AVL
No* inserir(No *raiz, Municipio *municipio) {
    if (raiz == NULL) {         //arvore vazia
        return novo_no(municipio);
    }
    else {//insercao direita ou esquerda

///-------------------------------------------------------------------------------------------
        ///comparando as strings para inserção em ordem

        int teste_compare_insercao = strcmp(municipio->nome, raiz->municipio->nome);

        ///-1 é quando a adicionada é menor
        ///1 quando a adicionada é maior
        ///0 quando sao iguais

/*      if(teste_compare_insercao == 0){
            cout << "\nSao iguais! " << endl;
        }
        else if(teste_compare_insercao == -1){
            cout << "\nA string adicionada eh menor! " << endl;
        }
        else{
            cout << "\nA string adicionada eh maior" << endl;
        }

        cout << teste_compare_insercao << endl;
*/
///-------------------------------------------------------------------------------------------

        if (teste_compare_insercao == -1/*municipio->nome < raiz->municipio->nome*/) {
            raiz->esquerda = inserir(raiz->esquerda, municipio);
        }
        else if (teste_compare_insercao == 1/*municipio->nome > raiz->municipio->nome*/) {
            raiz->direita = inserir(raiz->direita, municipio);
        }
        else{
            cout << "\nInsercao nao realizada! O elemento: " << municipio->nome << " nao existe!" << endl;
        }
    }

    // recalcula a altura de todos nos entre a raiz e o novo no inserido
    raiz->altura = maior(altura(raiz->esquerda), altura(raiz->direita) + 1);

    // verifica se precisa balancear
    raiz = balanceamento(raiz);

    return raiz;
}
/*====================================================================================================*/ //revisada

No* remover (No *raiz, char chave[50]){  // a chave é o nome do municipio
    if(raiz == NULL){
        cout << "Valor nao encontrado\n";
        return NULL;
    }
    else{   //procura no pra remover

///-------------------------------------------------------------------------------------------
        ///comparando as strings para remocao

        int teste_compare_remocao = strcmp(raiz->municipio->nome, chave);

        /// -1 é quando a adicionada é menor
        /// 1 quando a adicionada é maior
        /// 0 quando sao iguais

/*      cout << teste_compare_remocao << endl;
        if(teste_compare_remocao == 0){
            cout << "\nSao iguais! " << endl;
        }
        else if(teste_compare_remocao == -1){
            cout << "\nA string adicionada eh menor! " << endl;
        }
        else{
            cout << "\nA string adicionada eh maior" << endl;
        }

        cout << teste_compare_remocao << endl;
*/
///-------------------------------------------------------------------------------------------

        if(teste_compare_remocao == 0/*raiz->municipio->nome == chave*/){
            if(raiz->esquerda == NULL && raiz->direita == NULL){        //remove nos sem filhos(nos folhas)
                free(raiz);
                cout << "elemento " << chave << " removido " << endl;
                return NULL;
            }
            else{                                                       //remove se tiver 2 filhos
                if(raiz->esquerda != NULL && raiz->direita != NULL){
                    No *aux = raiz->esquerda;
                        while(aux->direita != NULL){
                            aux = aux->direita;
                        }
                    Municipio *municipioAux;
                    municipioAux = raiz->municipio;                     //fazendo copia
                    raiz->municipio = aux->municipio;
                    aux->municipio = municipioAux;
                    cout << "Elemento " << chave <<" trocado: " << endl;
                    raiz->esquerda = remover(raiz->esquerda, chave);
                    return raiz;
                }
                else{                                                   //remove no com 1 filho
                    No *aux;
                    if(raiz->esquerda != NULL){
                        aux = raiz->esquerda;
                    }
                    else{
                        aux = raiz->direita;
                    }
                    free(raiz);
                    cout << "Elemento "<< chave <<" com 1 filho removido!" << endl;
                    return(aux);
                }
            }
        }
        else{
            if(teste_compare_remocao == 1/*chave < raiz->municipio->nome*/){
                raiz->esquerda = remover(raiz->esquerda, chave);
            }
            else{
                raiz->direita = remover(raiz->direita, chave);
            }
        }

        //recalcula a antura de todos os noe ntre a raiz e o no inserido
        raiz->altura = maior(altura(raiz->esquerda), altura(raiz->direita)) + 1 ;

        //verifica se precisa rebalancear a arvore
        raiz = balanceamento(raiz);

        return raiz;
    }
}

/*====================================================================================================*/ //revisada

void imprimirMunicipio(Municipio *muni){
    cout << "Nome: " << muni->nome << "; Area: " << muni->area << "; Populacao: " << muni->populacao << endl;
}

/*====================================================================================================*/ //revisada

void imprimir(No *raiz, int nivel){
    int i=0;

    if(raiz){
        imprimir(raiz->direita, nivel + 1);
        cout << "\n" << endl;

        for(i=0; i < nivel; i++){
            cout << "\t";                   // o \t gera uma tabulação
        }

        imprimirMunicipio(raiz->municipio);
        imprimir(raiz->esquerda, nivel + 1);
    }
}

/*====================================================================================================*/ //revisada

int main(){
    int opcao;
    char nome_remover[50];
    No *raiz = NULL;
    Municipio *m;///pra conseguir adicionar varios municipios vai ser preciso usar alocação dinamica de memoria

    do{
        cout << "\n\t0 - SAIR\n\t1 - Inserir\n\t2 - Remover\n\t3 - Imprimir\n\n";
        cin >> opcao;

        switch(opcao){              ///no switch case nao é possivel declarar variaveis!!!!
///-----------------------------------------------------------------------------------------------
            case 0:
                cout << "...Saindo" << endl;
                break;
///-----------------------------------------------------------------------------------------------
            case 1:
                m = (Municipio*)malloc(sizeof(Municipio));

                cout << "Digite o nome a ser inserido: " ;
                cin >> m->nome;
                cout << "Digite a area: " ;
                cin >> m->area;
                cout << "Digite a populacao : " ;
                cin >> m->populacao;

                raiz = inserir(raiz, m);  //->nome retirado
                break;
///-----------------------------------------------------------------------------------------------
            case 2:
                cout << "digite o nome a ser removido: " << endl;
                cin >> nome_remover;
                raiz = remover(raiz, nome_remover);
                break;
///-----------------------------------------------------------------------------------------------
            case 3:
                imprimir(raiz, 1);
                break;
///-----------------------------------------------------------------------------------------------
            default:
                cout << "\nOpcao invalida" << endl;
        }
    }
    while (opcao !=0 );
}

/*====================================================================================================*/

///teste
/*
1
b
1
1

1
a
1
1

1
c
1
1

3
2
c
3
2
b
3
2
a
3

*/
