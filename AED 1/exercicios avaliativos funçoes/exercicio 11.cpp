#include<bits/stdc++.h>

struct alunos{
    char nome[50];
    double n[4], mediaNotas=0;
};

int i, notas, a=10;

void leitura(struct alunos reg[10]);
int recuperacao(int);


////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    struct alunos registros[10];

    leitura (registros);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void leitura(struct alunos reg[10]){

    for(i=0; i<a; i++){
        printf("Nome aluno:\n");
        scanf(" %[^\n]", reg[i].nome);

        for(notas=0; notas<4; notas++){
            printf("NOTA PROVA (%d)\n", notas+1);
            scanf("%lf", &reg[i].n[notas]);
            reg[i].mediaNotas = reg[i].mediaNotas + reg[i].n[notas];
        }
        reg[i].mediaNotas = (double)reg[i].mediaNotas / 4;
    }


    for(i=0; i<a; i++){
        printf("Aluno: %s", reg[i].nome);
        printf(". A media do aluno eh: %.1lf\n", reg[i].mediaNotas);
    }

///////////////////////////////////////////////// recuperacao /////////////////////////////////////////////////

    int teste=0;

    for(i=0; i<a;i++){
        teste = recuperacao (reg[i].mediaNotas);
        if(teste == 1){
            printf("\nO aluno de nome: %s, esta de recuperacao!\n", reg[i].nome);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int recuperacao(int x){
    int y=0;

    if(x<6){
        y=1;
    }

return y;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////