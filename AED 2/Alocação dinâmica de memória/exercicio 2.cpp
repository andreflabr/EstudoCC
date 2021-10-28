#include<bits/stdc++.h>

typedef struct{
    char  matricula[15];
    char  sobrenome[20];
    char  d_nascimento[10];
}alunos;

int main(){
    int i, j;

    printf("Quantos alunos serao cadastrados?\n");
    scanf("%d", &j);

    alunos **a;
    a = (alunos **)malloc(j*sizeof(alunos *))

    for(i=0; i<j; i++){
        a[i] = (alunos *)malloc(sizeof(alunos));
    }

        printf("Digite a matricula da pessoa:\n");
        scanf(" %[^\n]", a->matricula);
        printf("Digite o sobrenome da pessoa:\n");
        scanf(" %[^\n]", a->sobrenome);
        printf("Digite a data de nascimento da pessoa:\n");
        scanf(" %[^\n]", a->d_nascimento);
    
    
    printf("%s %s %s\n",a->matricula,a->sobrenome,a->d_nascimento);


    return 0;
}