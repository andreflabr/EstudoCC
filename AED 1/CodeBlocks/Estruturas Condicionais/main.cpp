
                                ///exercicio 1035

/*#include<bits/stdc++.h>
int main(){
    int a, b, c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    if((b > c) && (d > a) &&((c+d)>(a+b)) && (c >= 0) && (d >=0) && (a % 2 == 0)){
        printf("Valores aceitos\n");
    }
    else
        printf("Valores nao aceitos\n");

    return 0;
}
*/

                                ///exercicio 2344
/*
#include<bits/stdc++.h>
int main(){
        int n;
        scanf("%d", &n);

        if(n>=0 && n<=100){
                if(n==0){
                printf("E\n");
                } else if(n>=1 && n<=35){
                printf("D\n");
                } else if(n>=36 && n<=60){
                printf("C\n");
                } else if(n>=61 && n<=85){
                printf("B\n");
                } else if (n>=86 && n<=100){
                printf("A\n");
                }
        }
        return 0;
}
*/
                                /// exercicio 1041
/*
#include<bits/stdc++.h>
int main(){
    double x, y;

    scanf("%lf%lf", &x, &y);

    if(x==0 && y==0){
        printf("Origem\n");
    }else if(x==0){
        printf("Eixo Y\n");
    }else if(y==0){
        printf("Eixo X\n");
    }else if(x>0 && y>0){
        printf("Q1\n");
    }else if(x>0 && y<0){
        printf("Q4\n");
    }else if (x<0 && y<0){
        printf("Q3\n");
    }else if (x<0 && y>0){
        printf("Q2\n");
    }
return 0;
}
*/
                                ///exercicio 2339
/*
#include<bits/stdc++.h>
int main(){

    int c, p, f;
    scanf ("%d%d%d", &c, &p, &f); //c= numero de compretidore    p = folhas compradas   f = folhas pra cada

    if((p/f)>= c){
        printf("S\n");
    }else
    printf("N\n");


return 0;
}
*/
                                ///exercicio 1038
/*#include<bits/stdc++.h>
int main(){
    int codigo, quantidade;
    double total;
    scanf("%d%d", &codigo, &quantidade);

        switch(codigo){
        case 1:
            total = 4*quantidade;
            break;
        case 2:
            total = 4.5*quantidade;
            break;
        case 3:
            total = 5*quantidade;
            break;
        case 4:
            total = 2*quantidade;
            break;
        case 5:
            total = 1.5*quantidade;
            break;
        default:
            break;
    }
    printf("Total: R$ %.2lf\n", total);


return 0;
}
*/
                                ///exercicio 1052
/*#include<bits/stdc++.h>
int main(){
    int m;
    scanf("%d", &m);

    switch(m){
        case 1:
            printf("January\n");
        break;
        case 2:
            printf("February\n");
        break;
        case 3:
            printf("March\n");
        break;
        case 4:
            printf("April\n");
        break;
        case 5:
            printf("May\n");
        break;
        case 6:
            printf("June\n");
        break;
        case 7:
            printf("July\n");
        break;
        case 8:
            printf("August\n");
        break;
        case 9:
            printf("September\n");
        break;
        case 10:
            printf("October\n");
        break;
        case 11:
            printf("November\n");
        break;
        case 12:
            printf("December\n");
        break;
        default:
            break;
    }
return 0;
}
*/
