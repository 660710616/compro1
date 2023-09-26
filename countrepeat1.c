#include<stdio.h>
void main(){
    int N;
    int count=0;
    int count_M=0;
    scanf("%d",&N);
    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        if(x==N){
            count++;
            if(count>count_M){
                count_M = count;
            }
        } else if (x != N){
            count=0;
        }
        
    }
  
        printf("%d",count_M);
    
}