                                        ///URI 2165
/*#include<bits/stdc++.h>
int main(){
    char tweet[500];
    int x=0;

    gets(tweet);
    x=strlen(tweet);

    if(x<=140){
        printf("TWEET\n");
    } else
        printf("MUTE\n");

    return 0;
}*/

                                        ///URI 2147
/*#include<bits/stdc++.h>
int main(){
    char c[10000];
    int x=0, n, i=0;
    double y=0;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf(" %[^\n]", c);
        x=strlen(c);
        y=x*0.01;

        printf("%.2lf\n", y);

    }

return 0;
}*/
                                        ///URI 1865
/*#include<bits/stdc++.h>
int main(){
    int i=0, c=0, n=0;
    char name[30];

    scanf("%d",&c);
    for(i=0; i<c; i++){
            scanf("%s%d",name,&n);
            if(strcmp(name,"Thor")==0)
                printf("Y\n");
            else
                printf("N\n");
    }

return 0;
}*/

                                        ///URI 2176
/*#include<bits/stdc++.h>
int main(){
    char s[102];
    int i=0, cont_1=0;

    scanf(" %[^\n]",s);

    for(i=0; s[i]!='\0'; i++){
        if(s[i]=='1'){
            cont_1++;
    }
    }
        if(cont_1%2==0){
            strcat(s,"0");
        }else{
            strcat(s,"1");
        }

    printf("%s\n",s);


return 0;
}*/


                                        ///URI 1168
/*#include<bits/stdc++.h>
int main(){
    int  n, i=0, ii=0, leds=0;
    char num[10^100];

    scanf("%d",&n);

    for(i=0; i<n; i++){

        scanf("%s",num);

        for(ii=0; num[ii]!='\0'; ii++){

            if(num[ii]=='1'){
                leds = leds + 2;
                }
            else if(num[ii]=='2'){
                leds = leds + 5;
                }
            else if(num[ii]=='3'){
                leds = leds + 5;
                }
            else if(num[ii]=='4'){
                leds = leds + 4;
                }
            else if(num[ii]=='5'){
                leds = leds + 5;
                }
            else if(num[ii]=='6'){
                leds = leds + 6;
                }
            else if(num[ii]=='7'){
                leds = leds + 3;
                }
            else if(num[ii]=='8'){
                leds = leds + 7;
                }
            else if(num[ii]=='9'){
                leds = leds + 6;
                }
            else if(num[ii]=='0'){
                leds = leds + 6;
                }

        }

        printf("%d leds\n", leds);
        leds=0;

    }
return 0;
}
*/
