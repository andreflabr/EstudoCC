#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char name_arquivo[30];
    printf("Digite o nome do arquivo: \n");
    gets(name_arquivo);
    //printf("%s", name_arquivo);

    FILE *fp;
    char str[30];

    if((fp=fopen(“name_arquivo.txt”, “w”))==NULL){
        printf(“arquivo não pode ser aberto\n”);
        exit(1);
    }
    do{
        printf(“Entre uma string (CR para sair) : \n”);
        gets(str);
        strcat(str, “\n”);
        fputs(str, fp);
    } while(*str != ‘\n’ );
}
