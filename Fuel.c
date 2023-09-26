#include<stdio.h>
void main(){
    int km,litre;
    scanf("%d %d",&km,&litre);
    int total = (km+litre-1)/litre;
    printf("%d",total);
}