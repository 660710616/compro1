#include<stdio.h>
void main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int max=x;
        if(y>max)
        {
            max=y;
        }
        if(z>max)
        {
            max=z;
        }
    int min=x;
        
        if(y<min){
            min=y;
        }
        if(z<min){
            min=z;
        }

    int mid=x;
        if(y>min && y<max){
            mid=y;
        } 
        if(z>min && z<max){
            mid=z;
        }
    printf("%d %d %d",min,mid,max);     
}