#include<bits/stdc++.h>

void recursividade(int v[], int t, int cont){
    int aux;

    if(cont<t){
        aux=v[cont];
        v[cont]=v[t];
        v[t]=aux;

        recursividade(v, t-1, cont+1);
    } else{
        for(int i=0;i<10;i++){
            printf("%d ", v[i]);          
        }
    }
}

int main(){
    int vetor[10];

    for(int i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

    recursividade(vetor,9,0);

    return 0;
}