#include<stdio.h>
void main(){
    int x,y;
    int bigram1=0,bigram2=0,bigram3=0,bigram4=0;
    scanf("%d",&x);
    while(1){
        
        scanf("%d",&y);
        if(y!=0&&y!=1){
            break;
        }
        if(x==0&&y==0){
            bigram1++;
        }
        if(x==0&&y==1){
            bigram2++;
        }
        if(x==1&&y==0){
            bigram3++;
        }
        if(x==1&&y==1){
            bigram4++;
        }
        x=y;


    }
    printf("%d\n%d\n%d\n%d",bigram1,bigram2,bigram3,bigram4);
}