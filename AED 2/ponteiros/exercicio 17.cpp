#include<bits/stdc++.h>

void func(int *x, int *y){
    int aux;

    aux=*x;
    *x=*y;
    *y=aux;
}

int main(){
    int a,b;
    
    scanf("%d%d", &a, &b);

    func(&a,&b);

    printf("A = %d | B = %d\n", a, b);

    return 0;
}