#include<stdio.h>
void main(){
    int member,p,n;
    scanf("%d %d %d", &member,&p,&n);
    int sum=0,i;
    for(i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        sum += x ;
    }
    if(member){
        sum *= 0.9;
    }
    printf("%d\n",sum);
    int shipping;
    if(sum>=p){
        shipping = 0;
        printf("FREE\n");
    }else{
        shipping=15*n;
        if(shipping>100){
            shipping=100;
        }
        printf("%d\n",shipping);
    }
    printf("%d",sum+shipping);
}