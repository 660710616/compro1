#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    int aster=1,space=N-1;
    for(int row=1;row<=N;row++){
        for(int col=1;col<=space;col++){
            printf(" ");
        }
        for(int col=1;col<=aster;col++){
            printf("*");
        }
        printf("\n");
        aster++;
        space--;
    }
}