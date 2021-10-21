#include<bits/stdc++.h>

int main(){
    int a, b, c, *pc, d;

    scanf("%d%d", &a, &b);
    c = a+b;
    pc = &c;
    d = *pc;

    printf("%d\n", d);

    return 0;
}