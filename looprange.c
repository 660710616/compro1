#include <stdio.h>

void main(){
    int x, y, i;
    scanf("%d%d", &x, &y);

    if(y < x){
        printf("Invalid input");
    }
    else{
        i = x;
        while(i<=y){
            printf("%d ", i);
            i++;
        }
    }
}