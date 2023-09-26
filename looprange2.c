#include<stdio.h>
void main(){
    int x, y, i;
    scanf("%d%d", &x, &y);
    i = x;
    if(x<=y){
        while(i<=y){
            printf("%d ", i);
            i++;
        }
    }
    else{
        while(i>=y){
            printf("%d ", i);
            i--;
        }
    }
}