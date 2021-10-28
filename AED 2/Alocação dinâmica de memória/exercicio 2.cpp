#include<bits/stdc++.h>

struct alunos{
    char  matricula[15], d_nascimento[10], sobrenome[20];
};

int main(){
    struct alunos **a;
    int j, i;

    printf("Quantos alunos serao cadastrados?\n");
    scanf("%d", &j);

    a=(alunos **)malloc(j*sizeof(alunos *));

    for(i=0; i<j; i++){
        a[i]=(alunos *)malloc(sizeof(alunos));
    }
    for(i=0; i<j; i++){
        printf("Digite a matricula da pessoa:\n");
        scanf(" %[^\n]", a[i]->matricula);
        printf("Digite o sobrenome da pessoa:\n");
        scanf(" %[^\n]", a[i]->sobrenome);
        printf("Digite a data de nascimento da pessoa:\n");
        scanf(" %[^\n]", a[i]->d_nascimento);        
    }
    for(i=0; i<j; i++){
        printf("Matricula: %s | Sobrenome: %s | Data de nascimento: %s\n", a[i]->matricula, a[i]->sobrenome, a[i]->d_nascimento);        
    }

    for(i=0; i<j; i++){
        free(a[i]);
    }
    free(a);
    
    return 0;
}