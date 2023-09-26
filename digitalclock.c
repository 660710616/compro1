#include<stdio.h>
void main(){
    int h1,h2,m1,m2;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    for(int i=h1;i<=h2;i++){
        if(h2>h1){
            for(int j=m1;j<=59;j++){
                printf("%d:%.2d",i,m1);
                m1=m1+1;
                if(m1==60){
                    m1=0;
                    h1=h1+1;
                }

                printf("\n");
            }
        }
        else if (h1==h2){
            for(int j=m1;j<=m2;j++){
                printf("%d:%.2d",i,j);
                printf("\n"); 


            }
        }
    }
}