#include<bits/stdc++.h>

int binario(int);

///////////////////////////////////////////////

int main(){
    double d;
    int r;

    scanf("%lf", &d);

    r = binario(d);
    printf("%d", r);

return 0;
}

///////////////////////////////////////////////

int binario(int x){

    if(x==0){
        return 0;
    }else {
        return binario(x/2)*10 + x%2;
    }

}