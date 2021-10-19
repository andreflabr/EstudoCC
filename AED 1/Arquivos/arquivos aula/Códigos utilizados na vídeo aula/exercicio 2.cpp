#include<bits/stdc++.h>
using namespace std;

int main(){
    FILE *arquivo;
    int vet[10], i;

    arquivo = fopen("arquivo1.txt", "r");
    if(arquivo==NULL){
        printf("Erro na abertura!\n");
        exit(0);
    } else {
        for(i=0; i<10; i++){
            fscanf(arquivo, "%d ", &vet[i]);
        }
    }

    sort(vet,vet+10);
        for(i=0;i<10;i++){
            printf("%d ", vet[i]);
    }
    
    fclose(arquivo);
    
    return 0;
}