

                               /// exercicio 1

/*
#include<bits/stdc++.h>
int main(){
    int A, B, X;
    scanf("%d", &A);
    scanf("%d", &B);

    X = A + B;

    printf("X = %d\n", X);
    return 0;
}
*/

                                ///exercicio 2
/*
#include<bits/stdc++.h>

int main(){

    double v, S, h;
    int nf;

    scanf("%d",&nf);
    scanf("%lf",&h);
    scanf("%lf",&v);

    S = v*h;

    printf("NUMBER = %d\n", nf);
    printf("SALARY = U$ %.2lf\n", S);


return 0;

}
*/
                                   ///exercicio 3
/*
#include<bits/stdc++.h>
int main(){
    int codigoPeca1, numeroPeca1, codigoPeca2, numeroPeca2;
    double valorPeca1, valorPeca2, valorFinal;

    scanf("%d %d %lf", &codigoPeca1, &numeroPeca1, &valorPeca1);
    scanf("%d %d %lf", &codigoPeca2, &numeroPeca2, &valorPeca2);

    valorFinal = (numeroPeca1*valorPeca1)+ (numeroPeca2*valorPeca2);

    printf("VALOR A PAGAR: R$ %.2lf\n", valorFinal);

    return 0;
}
*/
                                     ///exercicio 4
/*
#include<bits/stdc++.h>
int main(){
    double x1, y1, x2, y2, z;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    z = sqrt(pow(x2-x1, 2) + pow(y1-y2, 2));

    printf("%.4lf\n", z);

    return 0;
}
*/
                                    ///exercicio 5
/*
#include<bits/stdc++.h>
int main(){
    double R,S=0;
    scanf("%lf", &R);
    if(R>=0 && R<=20){
        S=pow(3, R);
        printf("%.lf\n", S);
    }
return 0;
}
*/
                                    ///exercicio 6

/*#include<bits/stdc++.h>
int main(){
    int L,D,K,P,custoFinal,nPedagios;

    scanf("%d%d", &L, &D);
    scanf("%d%d", &K, &P);

    nPedagios = (L/D);
    custoFinal = (K*L)+(nPedagios*P);

    printf("%d\n", custoFinal);
return 0;
}
*/
