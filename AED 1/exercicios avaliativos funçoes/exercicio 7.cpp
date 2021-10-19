#include<bits/stdc++.h>


void elementos(int[]);
int i, b[10];

int main(){
    int vetor[10];

    for(i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

    elementos(vetor);

    printf("\n");
    for(i=0;i<10;i++){
        printf("%d  ", b[i]);
    }
    printf("\n");
    
    return 0;
}

void elementos(int a[]){

    for(i=0;i<10;i++){
        for(b[i]=1; a[i]>1; a[i]--){
            b[i]=(b[i]*a[i]);
        }
    }
}