#include<bits/stdc++.h>
int main(){
    int i=0, anos=0, joao=130, jose=100;    /// ja inicia com com os valores em centimetros

    while(i<1){
        jose = jose + 3;                    /// Jose Luiz : 100cm --> 3cm/ano
        joao = joao + 2;                    /// Joao Francisco : 130 cm --> 2cm/ano

        anos++;

        if(jose>joao){
                printf("%d anos\n", anos);
                i=1;

            }
    }
return 0;
}
