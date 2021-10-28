#include<bits/stdc++.h>

int main(){

    float x, y, *z;
    scanf("%f%f", &x, &y);

    z = (float *)malloc(sizeof(float));
    *z = x + y;

    printf("\nSoma eh igual: %.1f\n", *z);

    free(z);
}