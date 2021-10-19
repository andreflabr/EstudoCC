#include<bits/stdc++.h>

double vetor(int n=0);

/////////////////////////////////////////////
int main(){

double result = vetor();
    printf("%.2lf\n", result);

return 0;
}
/////////////////////////////////////////////
double vetor(int n){
    double x[6], r=0; 

    if(n<6){
        scanf("%lf", &x[n]);
        r = x[n] + (vetor(n+1));
    }
return r;
}
