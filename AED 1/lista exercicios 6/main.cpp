///exercicio 1172
/*
#include<bits/stdc++.h>
int main(){
    int x[10], i=0;
    for(i=0; i<10; i++){
        scanf("%d",&x[i]);
        if(x[i]<=0){
        x[i]=1;

        }
    printf("X[%d] = %d\n", i, x[i]);
    }

    return 0;
}
*/

///exercicio 2006
/*
#include<bits/stdc++.h>
int main(){
    int t, x[5], i=0, acertos=0;
    scanf("%d", &t);
    for(i=0; i<5; i++){
        scanf("%d", &x[i]);
        if(x[i]==t){
            acertos++;
        }

    }
    printf("%d\n", acertos);

return 0;
}
*/

///exercicio 1180
/*
#include<bits/stdc++.h>
int main(){
    int n=1000, i=0, x[n], menor=1000, posicao;
    scanf("%d", &n);


    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
        if(x[i] < menor){
            menor = x[i];
            posicao = i;
        }

    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

return 0;
}
*/

///exercicio 1178
/*
#include<bits/stdc++.h>
int main(){
    int i=0;
    double x, n[100];

    scanf("%lf", &x);
            n[0]= x;
            printf("N[%d] = %.4lf\n", i, x);

    for(i=1; i<100; i++){
            n[i] = n[i-1]/2;
            printf("N[%d] = %.4lf\n",i ,n[i]);

    }

return 0;
}
*/

///exercicio 1743
/*
#include<bits/stdc++.h>
int main(){
    int i=0, plug[5], conector[5], x=0;


    for(i=0; i<5; i++){
        scanf("%d", &plug[i]);
    }

    for(i=0; i<5; i++){
        scanf("%d", &conector[i]);
    }

    for(i=0; i<5; i++){
        if(plug[i] != conector[i]){
        x++;
        }
    }
    if(x==5){
        printf("Y\n");
    }else
        printf("N\n");

return 0;
}
*/
