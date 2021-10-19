#include<bits/stdc++.h>

void parcelas(int);
int main(){
    int x;

    scanf("%d", &x);
    parcelas(x);
    return 0;
}

void parcelas(int n){
    int i;
    double resultado=0;

    for(i=1; i<=n;i++){
    resultado = resultado + (pow(i,2)+1)/(i+3);        
    }

    printf("\n%.2lf\n", resultado);
}