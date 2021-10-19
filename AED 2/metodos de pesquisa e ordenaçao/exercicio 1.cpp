#include<bits/stdc++.h>

///////////////////////////////////////////////////////////////////

int pesquisa(int[], int, int);

///////////////////////////////////////////////////////////////////

int main(){
    int t=0, elem, lugar;

    printf("Digite o tamanho do vetor\n");
    scanf("%d", &t);
    int vetor[t];

    for(int i=0; i<t; i++){
        scanf("%d", &vetor[i]);
    }
    
    printf("\nQual numero deseja pesquisar?\n");
    scanf("%d", &elem);

    lugar = pesquisa(vetor, t, elem);

    printf("\nO valor a ser pesquisado, esta na posicao %d do vetor.\n", lugar);

    return 0;
}

///////////////////////////////////////////////////////////////////

int pesquisa(int v[], int tamanho, int elemento){
    int inicio=0, fim=tamanho-1, meio=0, k=-1;

    while((inicio<=fim) && (k==-1)){
        meio = (inicio + fim) /2;

        if(elemento == v[meio]){
            k=meio;

        } else if(elemento < v[meio]){
                fim = meio-1;
        }else{
                inicio = meio+1;
        }  
    }
return k;
}

///////////////////////////////////////////////////////////////////

/*valores teste

15
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15



*/