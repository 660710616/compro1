#include<stdio.h>
void main(){
    int pre=0;
    int repeatc=0;
    int count=0;
    int count_M=0;
    
    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        if(x==pre){
            count++;
            
        } else if (x != pre){
            count=1;
        }
        if(count>count_M){
            count_M = count;
            repeatc=x;
            }
        pre=x;
        
    }
  
        printf("%d\n",count_M);
        printf("%d\n",pre);
        
    
}