                                        ///Matriz de vota��o
/*
#include<bits/stdc++.h>
int main(){
    int c, l, eleitores, candidatos, votos;

    scanf("%d %d", &candidatos, &eleitores);

    int matriz[eleitores][candidatos] ; ///declara�ao de matriz


    for(l=0; l<eleitores; l++){
        for(c=0; c<candidatos; c++){
            scanf("%d", &matriz[l][c]);
        }
    }
    for(c=0; c<candidatos; c++){         ///teste  de cadidato
        for(l=0; l<eleitores; l++){
            if(matriz[l][c]==1){
                votos++;
            }
        }
    printf("Princesa %d: %d voto(s)\n", c+1, votos);
    votos=0;
    }

    return 0;
}
*/

                                        ///Tra�o de uma matriz
/*
#include<bits/stdc++.h>
int main(){
    int ordem=0, l=0, c=0;
    double total ;

    scanf("%d", &ordem);

    double matriz[ordem][ordem], diagonais[ordem];                       ///declara�ao matriz

    for(c=0; c<ordem; c++){
            for(l=0; l<ordem; l++){
                scanf("%lf", &matriz[l][c]);
            }
    }

    for(c=0; c<ordem; c++){
            for(l=0; l<ordem; l++){
                if(l==c){
                        diagonais[c]=matriz[l][c];
                }

            }
            //printf("%lf %lf %lf", diagonais);
    }


    printf("tr(A) = ");

    for(c=0; c<ordem; c++){
        printf("(%.2lf)", diagonais[c]);
        if(c<ordem-1){
            printf(" + ");
        }
        total=total+diagonais[c];

    }
    printf(" = %.2lf\n", total);



return 0;
}
*/
                                        ///L4Q2 - Soma Divina
/*
#include<bits/stdc++.h>
int main(){
    int ordem=0, c=0, l=0, cont=0;

    scanf("%d", &ordem);
    int mat1[ordem][ordem], mat2[ordem][ordem], mat3[ordem][ordem];   //declara�ao das 2 matrizes

    for(c=0; c<ordem; c++){
        for(l=0; l<ordem; l++){
            scanf("%d", &mat1[l][c]);
        }
    }
    for(c=0; c<ordem; c++){
        for(l=0; l<ordem; l++){
            scanf("%d", &mat2[l][c]);
        }
    }
    for(c=0; c<ordem; c++){
        for(l=0; l<ordem; l++){
            mat3[l][c] = mat1[l][c] + mat2[l][c];
            if(mat3[l][c] == 0){
                cont++;
            }
        }
    }
    ///printf("\n%d\n", cont);
    ///printf("\n%d\n", (ordem*ordem));

    if(cont == (ordem*ordem)){
        printf("Vazia\n");
    }
    else if(cont != (ordem*ordem)){
        for(c=0;c<ordem;c++){
            for(l=0;l<ordem;l++){
                printf("\n%d", mat3[l][c]);
            }
        }
    }
return 0;
}
*/
                                        ///Brincando com matrizes II
/*
#include<bits/stdc++.h>
int main(){

    int matriz[3][3], c=0, l=0, menor=9999, delta, nDiagonais=0; 
    double mediaPositivos=0,somador=0, contPositivos=0;

    for(c=0; c<3;c++){
        for(l=0; l<3; l++){
            scanf("%d", &matriz[l][c]);
        }
    }
    for(c=0; c<3;c++){
        for(l=0; l<3; l++){
            if(matriz[l][c] > 0 ){
                contPositivos++;
                somador = somador + matriz[l][c];
            }
            if(matriz[l][c] < menor){
                menor=matriz[l][c];
            }
            if(menor%2 == 0){
                delta = 1;
            } else if(menor%2 != 0){
                delta = 0;
            }
            if(l!=c){
                nDiagonais= nDiagonais + matriz[l][c];
            }
        }
    } 
    mediaPositivos=somador/contPositivos;

    printf("%.2lf %d %d %d\n", mediaPositivos, menor, delta, nDiagonais);

    return 0;
}
*/
                                            ///Chandler vs. Phoebe
/*
#include<bits/stdc++.h>
int main(){
    int t, l=0, c=0, i=0;

    scanf("%d", &t);
    int matriz[t][t], transposta[t][t];               ///declaraçao matriz

    for(c=0 ; c<t ; c++){
        for(l=0 ; l<t ; l++){
            scanf("%d", &matriz[l][c]);
            if(matriz[l][c] < 0){
                transposta[c][l] = (matriz[l][c] * 2);
            }else 
                transposta[c][l] = matriz[l][c];
        }
    }
    for(c=0 ; c<t ; c++){
        for(l=0 ; l<t ; l++){
            if(l == (t-1)){
            printf("%d", transposta[l][c]);              
            } else
            printf("%d ", transposta[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}
*/