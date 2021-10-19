                                        ///exercicio 3

#include<bits/stdc++.h>

struct alunos{
    char matricula[20], nome[50], situacao[20];
    double notas[2], media;
};

int main(){
    struct alunos registros[25];
    int i=0;

    for(i=0; i<25; i++){
        printf("Qual a matricula? \n");
        scanf(" %[^\n]", &registros[i].matricula);

        printf("Qual o nome? \n");
        scanf(" %[^\n]", &registros[i].nome);

        printf("Qual a nota da prova 1? (ate 10 pontos) \n");
        scanf("%lf", &registros[i].notas[1]);

        printf("Qual a nota da prova 2? (ate 10 pontos) \n");
        scanf("%lf", &registros[i].notas[2]);

        registros[i].media = (registros[i].notas[1] + registros[i].notas[2]) / 2;

        if(registros[i].media < 5){
            strcpy(registros[i].situacao, "Reprovado(a) ");
        }
        else if(registros[i].media < 6){
            strcpy(registros[i].situacao, "Exame! ");
        }
        else if(registros[i].media >= 6){
            strcpy(registros[i].situacao, "Aprovado(a) ");
        }
    }
                                                    ///relatorio
    for(i=0;i<25;i++){
        printf("\nNome: %s\nmatricula: %s\nNota 1: %.1lf\nNota 2: %.1lf\nMedia: %.2lf\nSituacao: %s\n\n", registros[i].nome, registros[i].matricula, registros[i].notas[1], registros[i].notas[2], registros[i].media, registros[i].situacao);

    }

return 0;
}
