#include<bits/stdc++.h>
#include"exercicio2.h"

Aluno* cria_aluno(int matricula, double nota1, double nota2, double nota3){
    Aluno *a=(Aluno*)malloc(sizeof(Aluno));
    a->matr = matricula;
    a->notas[0]=nota1;
    a->notas[1]=nota2;
    a->notas[2]=nota3;
    return a;
}

int obter_matricula(Aluno *a){
    return a->matr;
}
double obter_nota1(Aluno *a){
    return a->notas[0];
}
double obter_nota2(Aluno *a){
    return a->notas[1];
}
double obter_nota3(Aluno *a){
    return a->notas[2];
}
double obter_media(Aluno *a){
    return (a->notas[0]+a->notas[1]+a->notas[2])/3;
}
char* situacao(Aluno *a){
    if(obter_media(a)>=6)
        return "Aprovado";
    else
        return "Reprovado";
}
void libera(Aluno *a){
    free(a);
}
