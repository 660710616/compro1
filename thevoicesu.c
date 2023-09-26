#include<stdio.h>
void main(){
    int K,K1,K2,S1,S2,G ;
    scanf("%d %d %d %d %d %d",&K,&K1,&K2,&S1,&S2,&G);
    if(K1<K){
        if(G==1)
        {
            if(S1>=S2 && S1>=9){
                printf("1");
            }
            else if(S2>=9 && S1<9){
                printf("2");
            }        
        }
        else if(G==2)
        {
            if(S2>=S1 && S2>=9){
                printf("2");
            }
            else if(S1>=9 && S2<9){
                printf("1");
            }    
        }
    }
    else if(K2<K){
        if(G==1)
        {
            if(S1>=S2 && S1>=9){
                printf("1");
            }
            else if(S2>=9 && S1<9){
                printf("2");
            }        
        }
        else if(G==2)
        {
            if(S2>=S1 && S2>=9){
                printf("2");
            }
            else if(S1>=9 && S2<9){
                printf("1");
            }    
        }
    }
    else if (K1>=K && K2>=K){
        printf("0");
    }

}