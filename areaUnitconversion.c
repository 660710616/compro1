#include<stdio.h>
void main(){
    int r,w,result1=0,result2=0;
    scanf("%d %d",&r,&w);
    if(r*400<w){
        result1=(w/400)+r;
        result2=w-((w/400)*400);
    }
    else if(r*400>=w&&w<400){
        result1=r;
        result2=w;
    }
    else if(r*400>=w&&w>=400){
        result1=r+(w/400);
        result2=w-((w/400)*400);
        }
        else if(r==0){
            result1=w/400;
            result2=w-((w/400)*400);
        }
        else if(w==0){
            result1=r;
        }

        if(result1!=0&&result2!=0){
        printf("%d r ",result1);
        printf("%d w",result2);
        }
        else if(result1==0){
            printf("%d w",result2);
        }
        else if(result2==0){
            printf("%d r",result1);
        }
}
