                                ///exercicio 1060
/*
#include<bits/stdc++.h>
int main(){
    int i=1, positivos=0;
    double x;

    while(i<=6){
        scanf("%lf", &x);
        if(x>0){
            positivos++;
        }
        i++;
    }
    printf("%d valores positivos\n", positivos);

    return 0;
}
*/
                                ///exerccio 1114
/*
#include<bits/stdc++.h>
int main(){
    int i=0, x, y=2002;

    while(i<5){
        scanf("%d", &x);

        if(x != y){
            printf("Senha Invalida\n");
        }else{
            printf("Acesso Permitido\n");
            i=5;
        }
    }

return 0;
}
*/
                                ///exercicio 1387
/*
#include<bits/stdc++.h>
int main(){
    int i=1,l=0,r=0,soma=0;

    while(i<2){
            scanf("%d%d", &l,&r);

            if(l>=1 && r<=5){
                soma = l+r;
                printf("%d\n", soma);
            }if(l==0 && r==0){
                i=2;
            }
    }

return 0;
}
*/
                                    ///exercicio 1078
/*
#include<bits/stdc++.h>
int main(){
    int i=1, j, n=0, total=0;
        scanf("%d", &n);
    do{
        total = i*n;
        printf("%d x %d = %d\n", i, n, total);
        i++;
    }while(i<=10);



return 0;
}
*/
                                    ///exercicio 1113
/*
#include<bits/stdc++.h>
int main(){
    int i=1, x=0, y=0;

    do{
            scanf("%d%d", &x, &y);
            if(x<y){
                printf("Crescente\n");
            }else if(x>y){
                printf("Decrescente\n");
            }else if(x==y){
                i++;
            }
    }while(i<=1);

return 0;
}
*/
                                            ///exercicio 1154
/*
#include<bits/stdc++.h>
 int main(){
     int i=1, x=0, quantidade=0;
     double media=0;

     do{
            scanf("%d", &x);
            if(x>0){
                quantidade++;
                media = media+x;
            }else
            i=2;

     }while(i<=1);
     media = media/quantidade;
     printf("%.2lf\n", media);

 return 0;
 }
*/
