#include<stdio.h>
void main(){
    int a,b,c;
    int sum=0;
    scanf("%d%d%d",&a,&b,&c);
    int k=a;
    while(k<=b){
        sum+=k;
        k=k*c;
    }
    k=k/c;
    k=k/c;
    while(k>=a){
        sum+=k;
        k=k/c;
    }
    printf("%d",sum);

    

}