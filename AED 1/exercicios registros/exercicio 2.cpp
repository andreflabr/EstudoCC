                                        ///exercicio 2
#include<bits/stdc++.h>

struct pessoas{
    int idade;
    double salario;
    char nome[50];
};

int main(){  
    struct pessoas registro[10];
    int i=0, media, menorIdade=150, maiorIdade=0;
    char nomeNovo[50], nomeVelho[50];
    double contador=0;

    for(i=0; i<10; i++){
        printf("Qual o nome? \n");
        scanf(" %[^\n]", &registro[i].nome);

        printf("Qual a idade? \n");
        scanf("%d", &registro[i].idade);
        contador=contador+registro[i].idade;

        printf("Qual o salario? \n");
        scanf("%lf", &registro[i].salario);

        if(registro[i].idade < menorIdade){
            menorIdade = registro[i].idade;
            strcpy(nomeNovo, registro[i].nome);
        }
        if(registro[i].idade > maiorIdade){
            maiorIdade = registro[i].idade;
            strcpy(nomeVelho, registro[i].nome);
        }

    }
    for(i=0; i<10; i++){
        printf("Nome: %s / idade: %d / salario: R$%.2lf \n", registro[i].nome, registro[i].idade, registro[i].salario);
    }
    contador = contador/10;

    printf("\nA media das idades vale: %.1lf", contador);
    printf("\nA pessoa mais nova se chama: %s", nomeNovo);
    printf("\nA pessoa mais velha se chama: %s\n", nomeVelho);


return 0;
}