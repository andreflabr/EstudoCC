#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char name_arquivo[30];
    printf("Digite o nome do arquivo: (sem .extensao)\n");
    gets(name_arquivo);

    FILE *fp;
    char str[30];

    ///concatenando para nao precisar colocar a extensao do arquivo
    strcat(name_arquivo, ".txt");
    ///("%s\n", name_arquivo);

    if((fp=fopen(name_arquivo, "w"))==NULL){
        printf("arquivo não pode ser aberto\n");
        exit(1);
    }
    do{
        printf("Entre uma string (ENTER para sair) : \n");
        gets(str);
        strcat(str, "\n");
        fputs(str, fp);
    } while(*str != '\n' );
}

