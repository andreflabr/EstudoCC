#include<bits/stdc++.h>

void ordena(int x[], int tamanho){
    int i, j;
    int aux;
    
    printf("Antes: ");
    for(i=0; i<6; i++){
        printf("%d ", x[i]);
    }
    printf("\n\n");
////////////////////////////////////////////////////////
    for (i=1; i<tamanho; i++){
        aux=x[i];
        j=i-1;
        while((j>=0) && (aux<x[j])){
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = aux;

        for(int j=0;j<tamanho;j++){ //apresentando o vetor apos a etapa
            printf("%d ", x[j]);
        }
        printf("\n");
    }
////////////////////////////////////////////////////////
    printf("\nDepois: ");
    for(i=0; i<6; i++){
        printf("%d ", x[i]);
    }
    printf("\n");
}

int main(){
    int n[6] = {5, 4, 10, 1, 6, 2};

    ordena(n, 6);
return 0;
}