#include<stdio.h>
void main(){
    int km,litre;
    while(1){
    scanf("%d %d",&km,&litre);   
    
    if(km<=0 | litre<=0)
    {
        break;
    }
    else{
        int total = (km+litre-1)/litre;
        printf("%d",total);
    }
    
    
    
}
}
