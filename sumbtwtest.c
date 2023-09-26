#include<stdio.h>
void main(){
    int x,y,z;
    int total=0;
    scanf("%d%d",&x,&y);
    while(1){
        scanf("%d",&z);
        if(z<=0){
            break;
        }
        if(z>=x && z<=y)
        { 
            total+=z;   
        }
    }
    printf("%d",total);
}