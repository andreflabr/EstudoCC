#include<bits/stdc++.h>

int potencia(int,int);

int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    int result = potencia(x,y);
    printf("%d \n", result);

    return 0;
}

int potencia(int a, int b){
    int r;

    if(b==0){
        r=1;
    }else if(b>0){
        r =  a * (potencia(a,b-1));
    }
    
return r;
}