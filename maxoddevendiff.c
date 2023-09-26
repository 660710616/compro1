#include<stdio.h>
void main (){
    int x;
    int odd=0,even=0;
    for(;;){
        scanf("%d",&x);
        if(x<=0){
            break;
        }
        if(x%2==0 && x>even){
            even=x;
        }else if(x%2==1 && x>odd){
            odd=x;
        }
    }
    printf("%d\n%d\n",odd,even);
    int diff ;
    if(odd>even){
        diff = odd-even;
    }else{
        diff = even-odd;
    }
    printf("%d",diff);
    
}