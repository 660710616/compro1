#include<stdio.h>
void main (){
    int x,y,z; 
    int count_between=0,count_min=0,count_max=0;
    int temp;
    scanf("%d %d",&x,&y);
    if(x!=y){
        for(;;){
            scanf("%d",&z);
            if(z==0){
                break;
            }
            if(z<x && z>y){
                temp=y;
                y=x;
                x=temp;
            }
            if(z>x && z<y){
                count_between+=1;
            }
            else if(z<x && z<y){
                count_min+=1;
            }
            else if(z>x && z>y)
            {
                count_max+=1;
            }

        }
    }
    printf("%d\n",count_between);
    printf("%d\n",count_min);
    printf("%d",count_max);
}