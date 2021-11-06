#include<bits/stdc++.h>
#include"exercicio2.h"
Aluno* aluno(int matricula, double nota_1, double nota_2, double nota_3){
    Aluno *x=(Aluno*)malloc(sizeof(Aluno));
    x->m = matricula;
    x->notas[0]=nota_1;
    x->notas[1]=nota_2;
    x->notas[2]=nota_3;
    return x;
}
int matricula(Aluno *x){
    return x->m;
}
double nota_1(Aluno *x){
    return x->notas[0];
}
double nota_2(Aluno *x){
    return x->notas[1];
}
double nota_3(Aluno *x){
    return x->notas[2];
}
double media(Aluno *x){
    return (x->notas[0]+x->notas[1]+x->notas[2])/3;
}
char* situacao(Aluno *x){
    if(media(x)>=6){
        return "Aprovado";
    }else{
        return "Reprovado";
}
}
void libera(Aluno *x){
    free(x);
}
