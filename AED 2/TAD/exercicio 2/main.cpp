#include<bits/stdc++.h>
#include"exercicio2.h"
int main(){
    int a;
    double b,c,d;

    printf("Digite a matricula: ");
    scanf("%d", &a);
    printf("Digite a primeira nota: ");
    scanf("%lf", &b);
    printf("Digite a segunda nota: ");
    scanf("%lf", &c);
    printf("Digite a terceira nota: ");
    scanf("%lf", &d);

    struct Aluno *al=aluno(a, b, c, d);
    printf("\nMatricula: %d\n", matricula(al));
    printf("1 - Nota: %.1lf\n", nota_1(al));
    printf("2 - Nota: %.1lf\n", nota_2(al));
    printf("3 - Nota: %.1lf\n", nota_3(al));
    printf("A media foi de: %.1lf\n", media(al));
    printf("A situacao e: %s\n", situacao(al));
    libera(al);
    return 0;
}
