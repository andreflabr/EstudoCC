#include<bits/stdc++.h>
struct biblioteca{
    char catalogo[50], doacao[2], obra[50], autor[30], editora[30], area[30], biologicas[30], exatas[30], humanas[30];
};
int main(){
    struct biblioteca registros[1500];
    int i=0, j=0, c=0;
    char catalogacao[30], areaTeste[20];

    for(i=0; i<1500; i++){
        scanf(" %[^\n]", &registros[i].catalogo);///printf("Qual o codigo de catalogacao? \n");
        scanf(" %[^\n]", &registros[i].doacao);///printf("Doacao? (S/N) \n");
        scanf(" %[^\n]", &registros[i].obra);///printf("Qual nome da Obra? \n");
        scanf(" %[^\n]", &registros[i].autor);///printf("Qual nome do(a) autor(a)? \n");
        scanf(" %[^\n]", &registros[i].editora);///printf("Qual editora? \n");
        scanf(" %[^\n]", &registros[i].area);///printf("Esse livro e de que area? \n");

        if(strcmp(registros[i].area , "biologicas")==0){
            strcpy(registros[i].biologicas , registros[i].area);//printf("\n%s\n", registros[i].biologicas);
        } else if(strcmp(registros[i].area , "ciencias exatas")==0){
            strcpy(registros[i].exatas , registros[i].area);//printf("\n%s\n", registros[i].exatas);
        } else if(strcmp(registros[i].area , "humanas")==0){
            strcpy(registros[i].humanas , registros[i].area);//printf("\n%s\n", registros[i].humanas);
        } 
    }

    do{
        j=1;
        c=0;
        printf("\nQual o codigo de catalogacao? \n");
        scanf(" %[^\n]", &catalogacao);
        printf("\nQual a area do livro? \n");
        scanf(" %[^\n]", &areaTeste);
        
            for(i=0; i<1500; i++){
                if((strcmp(catalogacao,registros[i].catalogo)==0) && (strcmp(areaTeste,registros[i].area)==0)){
                    printf("\nNome da Obra: %s\n", registros[i].obra);
                    printf("Nome do Autor: %s\n", registros[i].autor);
                    printf("Editora: %s\n", registros[i].editora);
                    printf("Area: %s\n", registros[i].area);
                    printf("Doacao: %s\n", registros[i].doacao);
                    printf("Codigo de catalogacao: %s\n", registros[i].catalogo);
                    i=1500;
                }else{
                    c++;
                    if(c==1500){
                    printf("\nValores Invalidos, tente novamente.\n");    
                    }
                }
            }

        printf("\nCaso queira finalizar digite '-1'. Caso queira continuar digite '1'. (sem aspas) \n");
        scanf("%d", &j);

    } while (j!=-1);
  
return 0;
}
/*
entradas com 3 obras para testes de funcionalidades

0001
S
Bio
bio
bio
biologicas
0002

N
exatas
exatas
exatas
ciencias exatas
0003

S
Humano
humano
humano
humanas

*/