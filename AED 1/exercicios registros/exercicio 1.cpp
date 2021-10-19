                                        ///exercicio 1

#include<bits/stdc++.h>

struct registros{
    int idade;
    double salario;
    char nome[50];
};

int main(){  
    struct registros RA[10];
    int i=0;

    for(i=0; i<10; i++){
        printf("Qual o nome? \n");
        scanf("%s", &RA[i].nome);
        printf("Qual a idade? \n");
        scanf("%d", &RA[i].idade);
        printf("Qual o salario? \n");
        scanf("%lf", &RA[i].salario);
    }
    for(i=0; i<10; i++){
        printf("Nome: %s / idade: %d / salario: R$%.2lf \n", RA[i].nome, RA[i].idade, RA[i].salario);
    }
return 0;
}
