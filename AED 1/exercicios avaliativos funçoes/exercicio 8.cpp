#include<bits/stdc++.h>


int positivos(int[], int[]);
int i;

int main(){
    int v[10], z[10], quantidade;

    for(i=0; i<10;i++){
        scanf("%d", &v[i]);
    }
    quantidade=positivos(v, z);
    printf("Quantidade: %d\n", quantidade);
    
    return 0;
}

int positivos(int vetorX[], int vetorY[]){
    int x=0;

    for(i=0;i<10;i++){
        if(vetorX[i]>0){
            vetorY[x]=vetorX[i];
            x++;
        }
    }
    for(i=0;i<x;i++){
        printf("Y[%d] = %d\n", i, vetorY[i]);
    }

    return x;
}