#include<stdio.h>
#include<limits.h>
void main (){
        int x,y,z;
        int max=INT_MIN;
        int min=INT_MAX;
        int total=0;
        while(1){
            scanf("%d%d",&x,&y);
            if(x==0 && y==0){
                break;
            }
            if(x!=0){
                min=x;
            }
            if(y!=0){
                max=y;
            }
            if(max-min>total) //หาผลต่างของ max min
            {
                total=max-min; 
            }//หาชุดข้อมูลทีมีระยะห่างกันมากที่สุด
        
    }

    printf("%d",total);
}
