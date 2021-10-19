#include<bits/stdc++.h>

double recursividade(int);

int main(){
    int n;
    double esse;

    scanf("%d", &n);

    esse = recursividade(n);
    printf("%.5lf \n", esse);

return 0;
}

double recursividade(int ene){
    double s=0;

    if(ene==1){
        return s=1;
    }
    else{
        s = 1.0/ene +(recursividade(ene-1));
        return s;
    }
}