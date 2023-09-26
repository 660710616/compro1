#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    int aster=1,space=N/2;
    for(int row=1;row<=N/2;row++){
        for(int col=1;col<=space;col++){
            printf(" ");
        }
        for(int col=1;col<=aster;col++){
            printf("*");
        }
        printf("\n");
        aster+=2;
        space--;
        printf("\n");

    }

    space=0;
    aster=N;

     for(int row=1;row<=N/2+1;row++){
        for(int col=1;col<=space;col++){
            printf(" ");
        }
        for(int col=1;col<=aster;col++){
            printf("*");
        }
        printf("\n");
        aster-=2;
        space++;
        printf("\n");

    }
}