#include<bits/stdc++.h>

int main(){

    float x, y, *z;
    scanf("%f%f", &x, &y);

    z = (float *)malloc(sizeof(float));
    *z = x + y;

    printf("%.0f\n", *z);

    return 0;
}