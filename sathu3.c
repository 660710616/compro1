#include<stdio.h>
void main(){
    int x,sum=0;
    scanf("%d",&x);
    while(1){
        while(x>0){
            sum+=x%10;
            x=x/10;
        }
        printf("%d\n",sum);
        if(sum<10){
            break;
        }
        x =sum;
        sum=0;
    }
    if(sum==9){
        printf("SATHU");
    }
    else{
        printf("No SATHU");
    }
}