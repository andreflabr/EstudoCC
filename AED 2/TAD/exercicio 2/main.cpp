#include<bits/stdc++.h>
#include"exercicio2.h"

int main(){
    struct Aluno *aluno1=cria_aluno(1100, 6.2, 8.4, 7.7);
    printf("Matricula: %d\n", obter_matricula(aluno1));
    printf("Nota 1: %.1lf\n", obter_nota1(aluno1));
    printf("Nota 2: %.1lf\n", obter_nota2(aluno1));
    printf("Nota 3: %.1lf\n", obter_nota3(aluno1));
    printf("Media: %.1lf\n", obter_media(aluno1));
    printf("Situacao: %s\n", situacao(aluno1));
    libera(aluno1);
    return 0;
}
