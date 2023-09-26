#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    for(int row=1;row<=N;row++){
        for(int col=1;col<=row;col++){
            printf("*");
        }
        printf("\n");
    }
}