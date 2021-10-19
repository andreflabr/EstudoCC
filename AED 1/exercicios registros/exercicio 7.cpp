                                        ///exercicio 7

#include<bits/stdc++.h>
struct alunos{
    char matricula[25], nome[30];
    double media=0;
};
int main(){
    struct alunos registros[10];
    int i=0;
    double contL=0, turma, porcentagem;
    char testeL='L';

    for(i=0 ; i<10 ; i++){
        printf("matricula: \n");
        scanf(" %[^\n]", &registros[i].matricula);
        printf("Nome: \n");
        scanf(" %[^\n]", &registros[i].nome);
        printf("Media final: \n");
        scanf("%lf", &registros[i].media);

        turma = turma + registros[i].media;

        if(registros[i].nome[0] == testeL){          ///testes de inicial L
            contL++;
        }
    } 
    
    porcentagem = (contL/10)*100; //porcentagem
    turma = (turma/10);     //media turma
        
    printf("\nA media da turma e: %.1lf\n", turma);
    printf("A porcentagem de alunos com inicial 'L' e: %.1lf%%\n", porcentagem);

                                    
                                ///relatorio
    for(i=0; i<10;i++){
        if(registros[i].media>=6){
            printf("\nO aluno(a): %s, de media: %.1lf, foi APROVADO(A).", registros[i].nome, registros[i].media);
        }

    }
    printf("\n");

return 0;
}