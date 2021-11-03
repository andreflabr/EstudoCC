#include<bits/stdc++.h>

void maxMin(int *v, int N, int *maximo, int *minimo){
    int mi=-999, ma=9999;

    for(int i=0; i<N;i++){
        if(v[i]<ma){
            ma=v[i];
            *minimo = v[i];
        }
    }
    for(int i=0; i<N;i++){
        if(v[i]>mi){
            mi=v[i];
            *maximo = v[i];
        }
    }
}
int main(){
    int n, max=0, min=0, i=0;

    printf("Qual tamanho do vetor?\n");
    scanf("%d", &n);
    int vetor[n];

    printf("digite os numeros do vetor\n");
    while(i<n){
        scanf("%d", &vetor[i]);
        i++;
    }
    
    maxMin(vetor,n,&max,&min);

    printf("\nMaximo: %d | Minimo: %d\n", max, min);

    return 0;
}
/*teste

10
1
3
5
2
4
6
7
9
13
8

*/