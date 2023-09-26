#include<stdio.h>
void main(){
    int N;
    int count=0;
    scanf("%d",&N);
    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        if(x==N){
            count++;
        } 
        
    }
    if(count>0){
        printf("%d",count);
    }else{
        printf("None");
    }
}