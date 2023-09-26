#include<stdio.h>
void main(){
    int n, country, TH=0, TW=0, ML=0, FN=0, click=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d", &country);
        if(country==1){
            TH+=1;
            if(click < TH){
                click = TH;
            }
        }
        else if(country==2){
            TW+=1;
            if(click < TW){
                click = TW;
            }
        }
        else if(country==3){
            ML+=1;
            if(click < ML){
                click = ML;
            }
        }
        else if(country==4){
            FN+=1;
            if(click < FN){
                click = FN;
            }
        }
    }
    if(click == TH){
        printf("Thailand won with a score of %d", TH);
    }
    else if(click == TW){
        printf("Taiwan won with a score of %d", TW);
    }
    else if(click == ML){
        printf("Malaysia won with a score of %d", ML);
    }
    else
        printf("Finland won with a score of %d", FN);
}