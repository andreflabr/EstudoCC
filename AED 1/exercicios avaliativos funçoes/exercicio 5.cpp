#include<bits/stdc++.h>
 
double calculo(void);
 
int n;
 
int main(){
    double res;
 
    scanf("%d", &n);
    res=calculo();
    printf("\n%.2lf\n", res);
 
    return 0;
}
 
double calculo(void){
    double s;
    int i,j,x;
 
    for(i=0; i<=n; i++){
        x=1;
        for(j=i; j>1; j--){
            x=x*j;
        }
        s = s+(double)1 / x;
    }
    return s;
}