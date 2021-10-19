
#include<stdio.h>
#include<string.h>

main(){
    FILE *p;
    char cadeia[30];
    p=fopen("cadeias.txt","r");
    if(p==NULL)
        printf("\nErro na abertura");
    else{
        while(!feof(p)){
            fscanf(p,"%s",cadeia);
            if(ferror(p))
                printf("\nErro na leitura da cadeia");
            else{
                printf("\nLeitura realizada com sucesso");
                printf("\nCadeia lida %s",cadeia);
            }
        }
    }
    getch();
    fclose(p);
}
