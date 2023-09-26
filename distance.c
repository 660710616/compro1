#include<stdio.h>
void main(){
    int x,h,m;
    double time,distance;
    scanf("%d %d %d",&x,&h,&m);
    time=(h*60)+m;
    if(x<0){
        distance=(-1)*x*(time/60);
        printf("%.1f",distance);
        printf("\nreverse");
    }else{
        distance=x*(time/60);
        printf("%.1f",distance);   
    }
}