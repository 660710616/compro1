#include<stdio.h>
 void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    while(1){
        int n;
        scanf("%d",&n);
       if(n<0){
            printf("%d",n);
            break;
       } 
       if(n%x==0 && n%y==0 ){
            printf("%d\n",n);
            printf("2");
            break;
       }
       else if(n%y==0){
           printf("%d\n",n);
           printf("1");
           break;
       }
       else if(n%x==0){
            printf("%d\n",n);
            printf("0");
            break;
       }
    }
 }