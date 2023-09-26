#include<stdio.h>
int main(){
    int x,y,z,temp;
    scanf("%d%d%d",&x,&y,&z);
    temp= y;
    if (y<x){
        y = x;
        x = temp;
    }
    for (int i=x; i<=y; i++){
        printf("%d: ",i);
        for (int j=1; j<=z; j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }

}
