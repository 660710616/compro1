#include<stdio.h>
void main(){
    int x,y;
    scanf("%d %d",&x,&y);
//z1
    for(int i=1;i<=(x+1)*y+1;i++){
        printf("*");
    }
    printf("\n");
//z2
    for(int i=1;i<=y+1;i++){
        printf("*");
        for(int j=1;j<=x;j++){
            printf(" ");
        }
  
    }
//z3
    printf("\n");
    for(int i=1;i<=(x+1)*y+1;i++){
        printf("*");
    }

}