#include<bits/stdc++.h>

void funcao(int *x){
    int j=0;

    while(j < 5){
        printf("vetor[%d] = %d\n", j, *x++);
        j++;
    }
}

int main(){
    int vetor[5], i=0;

    while(i < 5){
        scanf("%d", &vetor[i]);
        i++;
    }

    funcao(vetor);
    return 0;
}