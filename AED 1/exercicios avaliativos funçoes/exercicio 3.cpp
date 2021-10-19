#include<bits/stdc++.h>

int fatorial(int);
int r;

int main(){
    int number, resultado;

    printf("Digite um número inteiro e positivo. \n");
    scanf("%d", &number);
    resultado=fatorial(number);

    printf("\n%d\n", r);

    return 0;
}
int fatorial(int x){
    int i;
    for(i=0; i<x; i++){
        r=r+(x-i);
    }

return r;
}