#include<stdio.h>
void main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    int max=a;
        if(b>max)
        {
            max=b;
        }
        if(c>max)
        {
            max=c;
        }
    int min=a;
        
        if(b<min){
            min=b;
        }
        if(c<min){
            min=c;
        }

    int mid=a;
        if(b>min && b<max){
            mid=b;
        } 
        if(c>min && c<max){
            mid=c;
        }
        
    printf("%d %d %d",min,mid,max);     
}