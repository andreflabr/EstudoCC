#include<bits/stdc++.h>

void teste(double, double, double);
int main(){

    double primeiro, segundo, terceiro;

    printf("Qual o primeiro valor? \n");
    scanf("%lf", &primeiro);
    printf("Qual o segundo valor? \n");
    scanf("%lf", &segundo);
    printf("Qual o terceiro valor? \n");
    scanf("%lf", &terceiro);

    teste(primeiro, segundo, terceiro);
    return 0; 
}

void teste(double a, double b, double c){
    if(a>b && a>c){
        printf("\n%.1lf eh o maior\n", a);
    }else if(b>a && b>c){
        printf("\n%.1lf eh o maior\n", b);
    }else if(c>a && c>b){
        printf("\n%.1lf eh o maior\n", c);
    }

}