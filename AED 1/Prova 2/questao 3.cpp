#include<bits/stdc++.h>

int primos(int);

int main(){
    int res, x;
    printf("Digite um valor: \n");
    scanf("%d", &x);

    res = primos(x);

    if(res==2){
        printf("\nEh primo\n");  
    }else
        printf("\nNao eh primo\n");     

    return 0;
}

int primos(int a){
    int i, cont=0;

    for(i=1; i<=a; i++){
        if(a == 2){
            cont=2;
        }else if(a % i == 0){
            cont++;    
        } 
    }
    return cont;
}