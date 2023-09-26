#include<stdio.h>
void main(){
    int x,y;
    int status=0;
    int countX=0;
    int countY=0;
    scanf("%d%d",&x,&y);
    while(1){
        int n;
        scanf("%d",&n);
       if(n<=0){
            break;
       } 
       if(n%x==0 && n%y==0 ){
            if(status==0){
                status==1;
            }
            
       }
       if(n%x==0){
        countX++;
           if(status==0){
             status==2;

           }
            
       }
       if(n%y==0){
        countY++;
            if(status==0){
             status==3;
            }
    }
    
    }
    printf("%d\n%d\n",countX,countY);
    if(status==1){
        printf("xy");
    } else if (status==2){
        printf("x");
    } else if (status==3){
        printf("y");
    }
}