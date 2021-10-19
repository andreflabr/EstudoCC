#include<bits/stdc++.h>

int main(){
    FILE *arquivo;
    int vet[10], i;

    arquivo = fopen("arquivo1.txt", "w");

    if(arquivo==NULL){
        printf("Erro na abertura!\n");
        exit(0);
    } else {
        for(i=0; i<10; i++){
            scanf("%d", &vet[i]);
            fprintf(arquivo, "%d ", vet[i]);
        }
    }
    
    fclose(arquivo);

    return 0;
}